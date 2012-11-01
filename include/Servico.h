#ifndef SERVICO_H
#define SERVICO_H

#include <string>
#include <vector>
using namespace std;


class Servico{
private:
	string data_inicio;
	string data_fim;

public:
	Servico(string data_inicio, string data_fim);

	virtual ~Servico();
	string getDataInicio() const;
	void setDataInicio(string data);
	string getDataFim() const;
	void setDataFim(string data);
	//virtual void imprime();

};



#endif
