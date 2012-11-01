/*
 * Veiculo.h
 *
 *  Created on: Sep 27, 2012
 *      Author: ster
 */

#ifndef Veiculo_H_
#define Veiculo_H_
#include <string>
#include <vector>
#include <iostream>
#include <Standart.h>
using namespace std;


class Veiculo
{
private:
  static int ID;
  int id;
  string marca;
  string modelo;
  string matricula;
  vector<Standard *> standards;
public:
  Veiculo();
  Veiculo(string mc, string mdl, string mt);
  Veiculo(int id, string mc, string mdl, string mt);
  int getID() const;
  string getMarca() const;
  string getModelo() const;
  string getMatricula() const;
  void setStatic(){ ID = 0;}
  void setID(int id);
  void setMarca (string mc);
  void setModelo (string mdl);
  void novoStandard(Standard * s);
  void removeStandard(int indice);
  void setMatricula (string mt);
  vector<Standard *> getStandards();
  friend ostream & operator<<(ostream & o, const Veiculo & v);
 // int readFile(ofstream * file);

  void setStandards(vector<Standard*> standards);


  virtual
  ~Veiculo();
};


#endif /* Veiculo_H_ */
