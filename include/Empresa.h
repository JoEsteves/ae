#ifndef EMPRESA_H
#define EMPRESA_H

#include "Pessoa.h"
#include "Cliente.h"
#include "Funcionario.h"

#include "Veiculo.h"
#include "Carro.h"
#include "Camiao.h"
#include "Bus.h"

#include <iostream>
#include <vector>
using namespace std;



class Empresa{
private:
	vector<Pessoa*> pessoas;
	vector <Cliente*> clientes;
	vector <Funcionario*> funcionarios;

	vector<Veiculo *> veiculos;
	vector <Carro *> carros;
	vector <Bus*> buses;
	vector <Camiao*> camioes;

public:
	Empresa();
	~Empresa();

	void menu();
	void clear();
	void pause();
	void novoFuncionario(Funcionario* func);
	void novoCliente(Cliente* c);

	void modificaFunc();
	void modificaCli();
	void modificaVeic();

	void removeFuncionario(int i);
	void removeCliente(int indice);

	void menuVeiculos();

	void escreveClientes();
	void escreveFuncionarios();

	void leClientes();
	void leFuncionarios();

	void distribuiPessoas();
	void distribuiVeiculos();


	void novoCarro(Carro *c);
	void novoCamiao(Camiao *c);
	void novoBus(Bus *b);
	void removeCarro(int indice);
	void removeCamiao(int indice);
	void removeBus(int indice);

	void escreveCarros();

	void leCarros();
	void leBuses();
	void escreveBuses();

	void leCamioes();
	void escreveCamioes();

};
#endif
