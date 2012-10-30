/*
 * Carro.h
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#ifndef CARRO_H_
#define CARRO_H_

#include "Veiculo.h"

using namespace std;

class Carro: public Veiculo
{
private:
  string tipo;
public:
  Carro();
  Carro(string mc, string mdl, string mt, string tp);
  string getTipo() const;
  void setTipo(string tp);
  friend ostream & operator<<(ostream & o, const Carro & c);
  virtual
  ~Carro();
};

#endif /* CARRO_H_ */
