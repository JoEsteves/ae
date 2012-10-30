/*
 * Menu.h
 *
 *  Created on: Oct 25, 2012
 *      Author: ster
 */

#ifndef MENU_H_
#define MENU_H_

#include <vector>
#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Carro.h"
#include "Camiao.h"
#include "Bus.h"
#include "Frota.h"
//#include "Exception.h"

using namespace std;

class Menu
{
private:
  Frota * t;
public:
  Menu(){};
  int menuFrota(Frota * ft);
  Veiculo * getVeiculo();
  class TamInv {
  public:
    int st;
    TamInv(int s) { st = s; }
  };
  virtual
  ~Menu(){};
};

#endif /* MENU_H_ */
