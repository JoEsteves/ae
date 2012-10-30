/*
 * Frota.h
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#ifndef FROTA_H_
#define FROTA_H_

#include "Veiculo.h"
#include <fstream>
#include <stdlib.h>


using namespace std;
/*
 *
 */
class Frota
{
private:
  vector<Veiculo *> frota;
public:
  Frota();
  void adicionaVeiculo(Veiculo * v);
  void removeVeiculo(Veiculo * v);
  int numVeiculos();
  void escVeicFicheiro();
  vector<Veiculo *> lerVeiculos();
  vector<Veiculo *> getFrota();

  virtual
  ~Frota();
};

#endif /* FROTA_H_ */
