/*
 * Bus.h
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#ifndef BUS_H_
#define BUS_H_

#include "Veiculo.h"

using namespace std;

class Bus: public Veiculo
{
public:
  Bus();
  Bus(string mc, string mdl, string mt);
  friend ostream & operator<<(ostream & o, const Bus & b);
  virtual
  ~Bus();
};

#endif /* BUS_H_ */
