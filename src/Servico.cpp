#include "Servico.h"

Servico::Servico(string data_inicio, string data_fim) {
	this->data_inicio = data_inicio;
	this->data_fim = data_fim;
}

Servico::~Servico() {

}

string Servico::getDataInicio() const {
	return data_inicio;
}

string Servico::getDataFim() const {
	return data_fim;
}

void Servico::setDataInicio(string data) {
	data_inicio = data;
}

void Servico::setDataFim(string data) {
	data_fim = data;
}
