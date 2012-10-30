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
	void modifica();
	void removeFuncionario(int i);
	bool removeCliente(Cliente* clie);

	void escreveClientes();
	void escreveFuncionarios();
	void leClientes();
	void leFuncionarios();

	void distribui();


	void novoVeiculo(Veiculo * v);
	void removeVeiculo(Veiculo * v);

	void escreveCarros();
	void leCarros();

	void leBuses();
	void escreveBuses();

	void leCamioes();
	void escreveCamioes();

};
#endif
