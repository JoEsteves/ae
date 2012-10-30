#include "Servico.h"

Servico::Servico(string data_inicio, string data_fim) {
	this->data_inicio = data_inicio;
	this->data_fim = data_fim;
}

Servico::~Servico() {

}

string Servico::get_data_inicio() const {
	return data_inicio;
}

string Servico::get_data_fim() const {
	return data_fim;
}

void Servico::set_data_inicio(string data) {
	data_inicio = data;
}

void Servico::set_data_fim(string data) {
	data_fim = data;
}

vector<Funcionario *> Servico::get_responsaveis() const {
	return responsaveis;
}

void Servico::adicionar_funcionario(Funcionario * funcionario) {
	responsaveis.push_back(funcionario);
}
