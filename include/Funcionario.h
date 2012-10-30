#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include "Pessoa.h"
#include <vector>
#include "Veiculo.h"

using namespace std;

class Funcionario : public Pessoa {
private:

	string tipo;
	double salario;
	int horasExtra;
	vector <Veiculo*> veiculos;

public:
	Funcionario(string nome, string contacto, string morada, string tipo, double salario, int horasExtra);

	~Funcionario();

	string getTipo() const;
	void setTipo(string tipo);

	double getSalario() const;
	void setSalario(double salario);

	int getHorasExtra() const;
	void setHorasExtra(int horasExtra);

	vector <Veiculo*> getVeiculos() const;
	void setVeiculos(vector <Veiculo*> veiculos);
	friend ostream& operator<< (ostream &out,const Funcionario &func);
	string imprime();

	bool sabe(){
		return false;
	}

};





#endif
