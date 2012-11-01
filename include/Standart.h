#ifndef STANDART_H
#define STANDART_H
#include "Servico.h"
#include <iostream>

class Standard:public Servico{
private:
	string nome;
	string descricao;
	double preco;
	double duracao;
public:
	Standard(string nome, string descricao,double preco, double duracao, string data_inicio, string data_fim);
	string getNome() const;
	void setNome(string nome);
	string getDescricao() const;
	void setDescricao(string descricao);
	double getPreco() const;
	void setPreco(double preco);
	double getDuracao() const;
	void setDuracao(double duracao);
	friend ostream & operator<<(ostream & o, const Standard & s);
	//TODO calcular preco final

};

 


#endif
