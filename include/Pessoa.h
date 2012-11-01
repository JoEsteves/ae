#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include "Veiculo.h"

using namespace std;


class Pessoa {
protected:
	string nome;
	string contacto;
	string morada;
	static int I;
	int id;
public:


	Pessoa(string nome, string contacto, string morada);
	virtual ~Pessoa();
//	virtual string imprime(const Pessoa & peeps);
	virtual bool sabe(){
		return false;
	}


	string getNome() const;
	void setNome( string nome);
	virtual int getId() const;


	string getContacto() const;
	void setContacto( string contacto);
	string getMorada() const;
	void setMorada(string morada);
	friend ostream& operator<< (ostream &out, const Pessoa &Pess);


};









#endif
