/*
 * main.cpp
 *
 *  Created on: Oct 28, 2012
 *      Author: ster
 */


#include "Veiculo.h"
#include "Carro.h"
#include "Camiao.h"
#include "Bus.h"
#include "Frota.h"

#include "Funcionario.h"
#include "Cliente.h"
#include "Pessoa.h"
#include "Empresa.h"

using namespace std;

int main(){
	Empresa *emp = new Empresa();
	vector <Veiculo*> cenasfixes;

//Parte Paulo
  Veiculo * c1 = new Veiculo("audi", "a3", "28-06-97");
  Veiculo * c2 = new Veiculo("Jk", "hhyf", "Radaddas");
  Veiculo * c3 = new Veiculo("Jk", "hhyf", "Radaddas");

 emp->novoVeiculo(c1);
 emp->novoVeiculo(c2);


//Parte Jo

	Funcionario *p1 = new Funcionario("joao", "12342", "av cenas", "patrao", 2345, 3);
	Funcionario *p2 = new Funcionario("FDX", "23534", "rua pila", "cuut0", 9878, 5);
	Funcionario *p3 = new Funcionario("marco", "12546", "lugar do ce", "jeknfc", 7854, 1);

	cenasfixes.push_back(c1);
	p1->setVeiculos(cenasfixes);

	Cliente *cli1 =new Cliente("nome", "55415", "morada");
	Cliente *cli2 =new Cliente("PILA", "55415", "mLAorada");
	emp->novoFuncionario(p1);

	emp->menu();
	//emp->novoFuncionario(p1);
//	emp->novoFuncionario(p2);
//	emp->novoFuncionario(p2);
 //	 emp->novoCliente(cli2);
  //delete (fleet);
}
