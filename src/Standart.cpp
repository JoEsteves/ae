#include "Standart.h"



Standart::Standart(string nome, string descricao, double preco, double duracao, string data_inicio, string data_fim):Servico(data_inicio, data_fim){

	this->nome=nome;
	this->preco=preco;
	this->duracao=duracao;

}

string Standart::get_nome() const{ 
	return nome;
}


void Standart::set_nome(string nome){
	this->nome=nome;
}

string Standart::get_descricao() const{
	return descricao;
}


void Standart::set_descricao(string descricao){
	this->descricao=descricao;
}


double Standart::get_preco() const{
	return preco;
}


void Standart::set_preco(double preco){
	this->preco=preco;
}


double Standart::get_duracao() const{
	return preco;
}


void Standart::set_duracao(double duracao){
	this->duracao=duracao;
}
