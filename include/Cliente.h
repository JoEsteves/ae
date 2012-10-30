#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <vector>
#include "Pessoa.h"
#include "Veiculo.h"

using namespace std;



class Cliente : public Pessoa {

	private:
	//int id;
	vector <Veiculo*> veiculos;

	public:
	Cliente();

	Cliente(string nome, string contacto, string morada);



	~Cliente();

	int getId() const;
	void setId(int id);
	bool sabe(){
		return true;
	}

	vector<Veiculo*> getVeiculos() const;
	void setVeiculos (vector <Veiculo*> Veiculos);
	friend ostream& operator<< (ostream &out,const Cliente &clie);

	string imprime();

};



#endif
