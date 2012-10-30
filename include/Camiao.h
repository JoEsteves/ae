/*
 * Camiao.h
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#ifndef CAMIAO_H_
#define CAMIAO_H_

#include "Veiculo.h"

using namespace std;
/*
 *
 */
class Camiao: public Veiculo
{
private:
  string categoria;
public:
  Camiao();
  Camiao(string mc, string mdl, string mt, string cat);
  string getCategoria() const;
  void setCategoria(string cat);
  friend ostream & operator<<(ostream & o, const Camiao & cm);
  virtual
  ~Camiao();
};

#endif /* CAMIAO_H_ */
