#ifndef STANDART_H
#define STANDART_H
#include "Servico.h"

class Standart:public Servico{
private:
	string nome;
	string descricao;
	double preco;
	double duracao;
public:
	Standart(string nome, string descricao,double preco, double duracao, string data_inicio, string data_fim);
	string get_nome() const;
	void set_nome(string nome);
	string get_descricao() const;
	void set_descricao(string descricao);
	double get_preco() const;
	void set_preco(double preco);
	double get_duracao() const;
	void set_duracao(double duracao);
	//void imprime();

};

 


#endif
