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

using namespace std;


class Veiculo
{
private:
  static int ID;
  int id;
  string marca;
  string modelo;
  string matricula;
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
  void setMatricula (string mt);
  friend ostream & operator<<(ostream & o, const Veiculo & v);
 // int readFile(ofstream * file);

  virtual
  ~Veiculo();
};


#endif /* Veiculo_H_ */
