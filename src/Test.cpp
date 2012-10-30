/*#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"*/
#include <string>
#include "Veiculo.h"
#include "Carro.h"
#include "Camiao.h"
#include "Bus.h"
#include "Frota.h"
#include "Menu.h"

//TODO remover ids dos construtores
/*
void createVehicle_Test() {

  Carro * c1 = new Carro(1, "Datsun", "s30z", "RS-30-55", "Sports Coupe");
  Camiao * t1 = new Camiao(2, "Scania", "650h", "25-AS-94", "Semi");
  Bus * b1 = new Bus(3, "BUS", "Merda", "65-AA-87");
  ASSERT_EQUAL(1, c1->getID());
  ASSERT_EQUAL("Datsun", c1->getMarca());
  ASSERT_EQUAL("s30z", c1->getModelo());
  ASSERT_EQUAL("RS-30-55", c1->getMatricula());
  ASSERT_EQUAL("Sports Coupe", c1->getTipo());
  ASSERT_EQUAL("Semi", t1->getCategoria());
  ASSERT_EQUAL("BUS", b1->getMarca());
  ASSERT_EQUAL("Merda", b1->getModelo());
  ASSERT_EQUAL("65-AA-87", b1->getMatricula());
}

void test_frota_size() {

  Frota * ft = new Frota();
  ASSERT_EQUAL(0, ft->numVeiculos());
  Carro * c1 = new Carro(1, "Datsun", "s30z", "RS-30-55", "Sports Coupe");
  Camiao * t1 = new Camiao(2, "Scania", "650h", "25-AS-94", "Semi");
  Bus * b1 = new Bus(3, "BUS", "Merda", "65-AA-87");
  ft->adicionaVeiculo(c1);
  ft->adicionaVeiculo(t1);
  ft->adicionaVeiculo(b1);
  ASSERT_EQUAL(3, ft->numVeiculos());
  ft->removeVeiculo(c1);
  ft->removeVeiculo(t1);
  ASSERT_EQUAL(1, ft->numVeiculos());
}


void runSuite(){
  cute::suite s;
  //TODO add your test here
  s.push_back(CUTE(createVehicle_Test));
  s.push_back(CUTE(test_frota_size));
  cute::ide_listener lis;
  cute::makeRunner(lis)(s, "Suite de testes da oficina");
}

int main(){
  runSuite();
  Carro * c1 = new Carro(1, "Datsun", "s30z", "RS-30-55", "Sports Coupe");
  vector<Veiculos *> vtemp;
 Camiao * t1 = new Camiao(2, "Scania", "650h", "25-AS-94", "Semi");
  Bus * b1 = new Bus(3, "BUS", "Merda", "65-AA-87");
  Menu * m = new Menu();
  cout <<  *c1 << endl;
  cout <<  *t1 << endl;
  cout <<  *b1 << endl;*/
  //m->menu();
  //c1->ler/*
 /*vtemp = c1->escVeicFicheiro(c1);

  return 0;
}*/



