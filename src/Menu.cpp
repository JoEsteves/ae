/*
 * Menu.cpp
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#include "Menu.h"

int Menu::menuFrota(Frota * ft){

  cout << "|......................GESTAO DE FROTA...........................|" << endl << endl;
  cout << "Seleccione uma opcão:" << endl;
  cout << "1: Listar Veiculos" << endl;
  cout << "2: Adicionar Veiculo" << endl;
  cout << "3: Remover Veiculo" << endl;

  int opcao = 0;
  cin >> opcao;

  switch(opcao){

  case 1: {
    for(unsigned int i=0; i < ft->getFrota().size(); i++){
        cout << ft->getFrota()[i] << endl;
    }
  }break;

  case 2: {
    try {
    ft->adicionaVeiculo(getVeiculo());
    }
    catch(TamInv & t(int i)){
        cout << "Tamanho superior a " << "X" << endl;
    }
  }break;

  case 3: {
    cout << "3" << endl;
  }break;

  default: {
    cout << "Opção invalida" << endl;
  }break;

  }

  cout << "|......................CLOSING...........................|" << endl;
  return 0;
}

Veiculo * Menu::getVeiculo(){
  bool b = false;
  string brand,model,lp;

  cout << "Insira a marca do veiculo :" << endl;
  do {
      getline(cin, brand);
      if(brand.size() > 20){
          throw TamInv(20);
      }
      b = true;
  }while(!b);

    b = false;
  cout << "Insira o modelo do veiculo :" << endl;
  do {
      getline(cin, model);
      if(model.size() > 20){
          throw TamInv(20);
      }
      b = true;
  }while(!b);

    b = false;
   cout << "Insira o modelo do veiculo :" << endl;
   do {
       getline(cin, model);
       if(model.size() > 20){
           throw TamInv(20);
       }
       b = true;
   }while(!b);

     b=false;
    cout << "Insira a matricula do veiculo (XX-XX-XX):" << endl;
    do {
        getline(cin, lp);
        if(lp.size() > 6){
            throw TamInv(6);
        }
        b = true;
    }while(!b);

    Veiculo * vei = new Veiculo(brand, model, lp);
    return vei;

}
