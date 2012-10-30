#ifndef SERVICO_H
#define SERVICO_H

#include <string>
#include <vector>
#include "Funcionario.h"
using namespace std;


class Servico{
private:
	string data_inicio;
	string data_fim;
	vector<Funcionario *> responsaveis;
public:
	Servico(string data_inicio, string data_fim);

	virtual ~Servico();
	string get_data_inicio() const;
	void set_data_inicio(string data);
	string get_data_fim() const;
	void set_data_fim(string data);
	vector<Funcionario *> get_responsaveis() const;
	//virtual void imprime();
	void adicionar_funcionario( Funcionario * funcionario);

};



#endif
