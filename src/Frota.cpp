/*
 * Frota.cpp
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#include "Frota.h"

Frota::Frota()
{}

Frota::~Frota()
{ cout << "DESTRUTOR" << endl;


}

void Frota::adicionaVeiculo(Veiculo * v){

  frota.push_back(v);
}

void Frota::removeVeiculo(Veiculo * v){

  vector<Veiculo*>::iterator it;

  for(it = frota.begin(); it != frota.end(); it++){
      if((*it)->getID() == v->getID()){
          it = frota.erase(it);
      }
  }
}

int Frota::numVeiculos(){

  return frota.size();
}

void Frota::escVeicFicheiro(){

  ofstream filestr;

  filestr.open("Veiculos.txt", fstream::trunc);

  vector<Veiculo*>::iterator it;
  if(filestr.is_open())
    {
      cout << "Abriu o ficheiro de veiculos" << endl;

      for(unsigned int i = 0; i < frota.size(); i++)
        {
          if(i != 0){
              filestr << endl;
          }
          cout << (*frota[i])<< endl;
          filestr << frota[i]->getID() << endl;
          filestr << frota[i]->getMarca() << endl;
          filestr << frota[i]->getModelo() << endl;
          filestr << frota[i]->getMatricula();
        /*  if(i != frota.size()){
              filestr << endl;
          }*/
        }
      filestr.close();
    }
  else
    cout << "Nao abre" << endl;
}

vector<Veiculo *> Frota::lerVeiculos(){
  fstream file;
  string ids,brand,model,lp;
  int id;
  file.open("Veiculos.txt");

  if(file.is_open()){
      while(!file.eof()){
          getline(file, ids);
          getline(file, brand);
          getline(file, model);
          getline(file, lp);

          id = atoi(ids.c_str());
          Veiculo * v = new Veiculo(brand,model,lp);
          frota.push_back(v);
      }
  }
  return frota;
}

vector<Veiculo *> Frota::getFrota(){
  return frota;
}
