#include "Empresa.h"
#include <fstream>
#include <stdlib.h>

Empresa::Empresa() {
	leClientes();
	leFuncionarios();
	distribui();
}

Empresa::~Empresa() {

}

void Empresa::clear() {
	for (unsigned int i = 0; i < 40; i++) {
		cout << endl;
	}
}

void Empresa::pause() {
	cout << "prima qualquer tecla para continuar" << endl;
	cin.get();
	cin.get();
}

void Empresa::escreveClientes() {
	fstream ficheiro;
	ficheiro.open("Clientes.txt", fstream::out);

	if (ficheiro.is_open()) {
		for (unsigned int i = 0; i < clientes.size(); i++) {
			ficheiro << clientes[i]->getNome() << endl;
			ficheiro << clientes[i]->getContacto() << endl;
			ficheiro << clientes[i]->getMorada();
			if (i != clientes.size() - 1) {
				ficheiro << endl;
			}
		}
	}
	ficheiro.close();
}

void Empresa::escreveFuncionarios() {
	fstream ficheiro;
	ficheiro.open("Funcionarios.txt", fstream::out);

	if (ficheiro.is_open()) {
		for (unsigned int i = 0; i < funcionarios.size(); i++) {
			ficheiro << funcionarios[i]->getNome() << endl;
			ficheiro << funcionarios[i]->getContacto() << endl;
			ficheiro << funcionarios[i]->getMorada() << endl;
			ficheiro << funcionarios[i]->getTipo() << endl;
			ficheiro << funcionarios[i]->getSalario() << endl;
			ficheiro << funcionarios[i]->getHorasExtra() << endl;
			ficheiro << funcionarios[i]->getVeiculos().size() << endl;
			for (unsigned int j = 0; j < funcionarios[i]->getVeiculos().size();
					j++) {
				ficheiro << funcionarios[i]->getVeiculos()[j]->getMarca()
						<< endl;
				ficheiro << funcionarios[i]->getVeiculos()[j]->getMatricula()
						<< endl;
				ficheiro << funcionarios[i]->getVeiculos()[j]->getModelo();
				if (j != funcionarios[i]->getVeiculos().size() - 1) {
					ficheiro << endl;
				}
			}
			if (i != funcionarios.size() - 1) {
				ficheiro << endl;
			}
		}
	}
	ficheiro.close();
}

void Empresa::novoCliente(Cliente * c) {
	clientes.push_back(c);

}

void Empresa::novoVeiculo(Veiculo * v) {
	veiculos.push_back(v);
}

void Empresa::removeFuncionario(int i) {
	funcionarios.erase(funcionarios.begin() + i);
}

/*
 void Empresa::removeVeiculo(Veiculo * v){

 vector<Veiculo*>::iterator it;

 for(it = veiculos.begin(); it != veiculos.end(); it++){
 if((*it)->getID() == v->getID()){
 it = veiculos.erase(it);
 }
 }
 }

 */

void Empresa::leCarros() {
	fstream file;
	string brand, model, lp, tip;
	file.open("Carros.txt");

	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, brand);
			getline(file, model);
			getline(file, lp);
			getline(file, tip);

			Carro * v = new Carro(brand, model, lp, tip);
			carros.push_back(v);
		}
	}

}

void Empresa::leBuses() {
	fstream file;
	string brand, model, lp;
	file.open("Buses.txt");

	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, brand);
			getline(file, model);
			getline(file, lp);

			Bus * v = new Bus(brand, model, lp);
			buses.push_back(v);
		}
	}

}

void Empresa::leCamioes() {
	fstream file;
	string brand, model, lp, cat;
	file.open("Camioes.txt");

	if (file.is_open()) {
		while (!file.eof()) {
			getline(file, brand);
			getline(file, model);
			getline(file, lp);
			getline(file, cat);

			Camiao * v = new Camiao(brand, model, lp, cat);
			camioes.push_back(v);
		}
	}

}

void Empresa::escreveCarros() {
	ofstream filestr;
	filestr.open("Carros.txt");

	if (filestr.is_open()) {
		for (unsigned int i = 0; i < carros.size(); i++) {
			filestr << carros[i]->getMarca() << endl;
			filestr << carros[i]->getModelo() << endl;
			filestr << carros[i]->getMatricula() << endl;
			filestr << carros[i]->getTipo();

			if (i != veiculos.size() - 1) {
				filestr << endl;
			}
		}
		filestr.close();
	} else
		throw "Impossivel abrir o ficheiro Carros.txt";
}

void Empresa::escreveBuses() {
	ofstream filestr;
	filestr.open("Buses.txt");

	if (filestr.is_open()) {
		for (unsigned int i = 0; i < buses.size(); i++) {
			filestr << buses[i]->getMarca() << endl;
			filestr << buses[i]->getModelo() << endl;
			filestr << buses[i]->getMatricula();

			if (i != buses.size() - 1) {
				filestr << endl;
			}
		}
		filestr.close();
	} else
		throw "Impossivel abrir o ficheiro Buses.txt";
}

void Empresa::escreveCamioes() {
	ofstream filestr;
	filestr.open("Camioes.txt");

	if (filestr.is_open()) {
		for (unsigned int i = 0; i < camioes.size(); i++) {
			filestr << camioes[i]->getMarca() << endl;
			filestr << camioes[i]->getModelo() << endl;
			filestr << camioes[i]->getMatricula() << endl;
			filestr << camioes[i]->getCategoria();

			if (i != camioes.size() - 1) {
				filestr << endl;
			}
		}
		filestr.close();
	} else
		throw "Impossivel abrir o ficheiro Camioes.txt";
}

void Empresa::novoFuncionario(Funcionario * f) {
	funcionarios.push_back(f);
}

void Empresa::leClientes() {
	fstream ficheiro;

	string nome, morada, contactoe;
	string contacto;

	ficheiro.open("Clientes.txt", ios::in);

	if (ficheiro.is_open()) {
		while (!ficheiro.eof()) {
			getline(ficheiro, nome);
			getline(ficheiro, contacto);
			getline(ficheiro, morada);

			Cliente * ce = new Cliente(nome, contacto, morada);
			clientes.push_back(ce);

		}
	}

}

void Empresa::leFuncionarios() {
	vector<Veiculo*> vTemp;

	fstream ficheiro;
	int id, horasExtra, tmi;
	string nome, morada, contacto, tipo, salarioe, horasExtrae, temp, marca,
			modelo, matricula;
	double salario;

	ficheiro.open("Funcionarios.txt", fstream::in);

	if (ficheiro.is_open()) {
		while (!ficheiro.eof()) {

			getline(ficheiro, nome);
			getline(ficheiro, contacto);
			getline(ficheiro, morada);
			getline(ficheiro, tipo);
			getline(ficheiro, salarioe);
			getline(ficheiro, horasExtrae);
			getline(ficheiro, temp);
			tmi = atoi(temp.c_str());
			for (unsigned int i = 0; i < tmi; i++) {
				getline(ficheiro, marca);
				getline(ficheiro, modelo);
				getline(ficheiro, matricula);
				Veiculo *vec = new Veiculo(marca, modelo, matricula);
				vTemp.push_back(vec);
			}

			salario = atof(salarioe.c_str());
			horasExtra = atoi(horasExtrae.c_str());

			Funcionario * ce = new Funcionario(nome, contacto, morada, tipo,
					salario, horasExtra);
			ce->setVeiculos(vTemp);
			funcionarios.push_back(ce);

		}
	}

}

void Empresa::distribui() {
	for (unsigned int i = 0; i < clientes.size(); i++) {
		pessoas.push_back(clientes[i]);
	}
	for (unsigned int i = 0; i < funcionarios.size(); i++) {
		pessoas.push_back(funcionarios[i]);
	}
}

///////////////////////////////////MENU////////////////////////////////////

void Empresa::menu() {
	int op, opF, opC;
	string nomeCliente, moradaCliente, contactoCliente;
	do {
		clear();
		cout << "Bemvindo a empresa Jopati" << endl << endl;
		cout << "Menu Funcionarios-------------1" << endl;
		cout << "Menu Cliente------------------2" << endl;
		cout << "Menu Veiculos-----------------3" << endl;
		cout << "Servicos----------------------4" << endl;
		cout << "Sair--------------------------0" << endl;
		cout << "Escolha a sua opcao" << endl;
		cout << "opcao : ";
		cin >> op;
		switch (op) {
		case 1: {

			clear();
			cout << "**************Menu Funcionarios***********************"
					<< endl << endl;
			cout << "Adicionar Funcionario----------------1" << endl;
			cout << "Remover Funcionario------------------2" << endl;
			cout << "Modificar Funcionario----------------3" << endl;
			cout << "Listar Funcionarios------------------4" << endl;
			cout << "Sair---------------------------------0" << endl;
			cin >> opF;
			cin.ignore(1000, '\n');

			string nome, contacto, morada, tipo, salarioe;
			double salario;
			int horasExtra = 0;

			switch (opF) {
			case 1: {
				int confirmacao;
				do {
					clear();
					cout << "Insira nome de Funcionario" << endl;
					getline(cin, nome);
					cout << "Insira contacto de Funcionario" << endl;
					getline(cin, contacto);
					cout << "Insira morada de Funcionario" << endl;
					getline(cin, morada);
					cout << "Insira tipo de Funcionario" << endl;
					getline(cin, tipo);
					cout << "Insira salario de Funcionario" << endl;
					getline(cin, salarioe);
					salario = atof(salarioe.c_str());

					Funcionario * funcTemp = new Funcionario(nome, contacto,
							morada, tipo, salario, horasExtra);
					clear();
					funcTemp->imprime();

					cout << "Confirma os dados?" << endl;
					cout << "Sim----------------------1" << endl;
					cout << "Nao----------------------2" << endl;
					cin >> confirmacao;
					if (confirmacao == 1) {
						novoFuncionario(funcTemp);
					} else {
						cout << "Deseja insirir os dados de novo?" << endl;
						cout << "Nao-----------1" << endl;
						cout << "Sim-----------2" << endl;
						cin >> confirmacao;

					}

				} while (confirmacao != 1);

			}
				break;
			case 2: {
				clear();
				int numeracao, conf;
				for (unsigned int i = 0; i < funcionarios.size(); i++) {
					cout << i + 1 << "   " << funcionarios[i]->getNome()
							<< endl;
				}

				cout << "Qual dos funcionarios deseja eliminar?" << endl;
				cin >> numeracao;

				clear();
				cout << *(funcionarios[numeracao - 1]) << endl;
				cout << "Tem a certeza que quer apagar este Funcionario?"
						<< endl;
				cout << "Sim --------------------------------------------1"
						<< endl;
				cout << "Nao --------------------------------------------2"
						<< endl;
				cin >> conf;
				if (conf == 1) {
					removeFuncionario(numeracao - 1);
					cout << "Funcionario apagado do sistema" << endl;
					pause();
				}
			}

				break;

			case 3: {

			}
				break;

			case 4: {
				clear();
				int numeracao, conf;
				for (unsigned int i = 0; i < funcionarios.size(); i++) {
					cout << i + 1 << "   " << funcionarios[i]->getNome()
							<< endl;
				}

				cout << "Qual dos funcionarios deseja examinar?" << endl;
				cin >> numeracao;

				cout << *(funcionarios[numeracao - 1]) << endl;
				pause();
			}
				break;
			case 0: {
				opF = 0;
			}
				break;
			}

		}
			break;
		case 2: {
			clear();
			cout << "**************Menu Clientes***********************" << endl
					<< endl;
			cout << "Adicionar Cliente----------------1" << endl;
			cout << "Remover Cliente------------------2" << endl;
			cout << "Modificar Cliente----------------3" << endl;
			cout << "Listar Clientes------------------4" << endl;
			cout << "Sair---------------------------------0" << endl;
			cin >> opC;
			cin.ignore(1000, '\n');
			switch (opC) {
			case 1: {
				int confirmacao;
				do {
					clear();
					cout << "insira nome do Cliente" << endl;
					getline(cin, nomeCliente);
					cout << "Insira morada do CLiente" << endl;
					getline(cin, moradaCliente);
					cout << "Insira contacto cliente" << endl;
					getline(cin, contactoCliente);
					Cliente * cliTemp = new Cliente(nomeCliente,
							contactoCliente, moradaCliente);
					clear();
					cout << *cliTemp << endl << endl;

					cout << "Confirma os dados?" << endl;
					cout << "sim-----------1" << endl;
					cout << "nao-----------2" << endl;
					cin >> confirmacao;
					if (confirmacao == 1) {
						novoCliente(cliTemp);
						cout << "Cliente adicionado" << endl;
						pause();
					} else {
						cout << "Deseja insirir os dados de novo?" << endl;
						cout << "nao-----------1" << endl;
						cout << "sim-----------2" << endl;
						cin >> confirmacao;

						pause();
					}
				} while (confirmacao != 1);

			}
			}
		}
			break;
		case 3: {
		//TODO ver porque que nao entra no case 3
			modifica();
			cin.get();
			cin.get();

		}
			break;

		case 4: {

		}
			break;
		case 0: {
			escreveClientes();
			escreveFuncionarios();
			op = 0;
		}
			break;
		} //end 1st switch

	} while (op != 0);
}

void Empresa::modifica() {
	int numeracao, conf;
	for (unsigned int i = 0; i < funcionarios.size(); i++) {
		cout << i + 1 << "   " << funcionarios[i]->getNome() << endl;
	}

	cout << "Qual o funcionario que deseja modificar" << endl;
	cin >> numeracao;
	cin.ignore(1000, '\n');

	clear();
	cout << *(funcionarios[numeracao - 1]) << endl;
	pause();
	cout << "o que deseja modificar ?" << endl;
	cout << "Nome---------------1" << endl;
	cout << "Contacto-----------2" << endl;
	cout << "Morada-------------3" << endl;
	cout << "Horas extra--------4" << endl;
	cout << "Salario------------5" << endl;
	cout << "Especializacao-----6" << endl;
	cout << "Alterar Veiculos---7" << endl;
	cout << "Sair---------------0" << endl;
	cin >> conf;
	cin.ignore(1000, '\n');

	switch (conf) {

	case 1: {
		clear();
		string nome;
		cout << "Qual o novo nome?" << endl;
		getline(cin, nome);
		funcionarios[numeracao - 1]->setNome(nome);
		cout << "Nome alterado com sucesso" << endl;
		pause();
	}
		break;

	case 2: {
		clear();
		string contacto;
		cout << "Qual o novo contacto?" << endl;
		getline(cin, contacto);
		funcionarios[numeracao - 1]->setContacto(contacto);
		cout << "Contacto alterado com sucesso" << endl;
		pause();
	}
		break;
	case 3: {
		string morada;
		cout << "Qual a nova morada?" << endl;
		getline(cin, morada);
		funcionarios[numeracao - 1]->setMorada(morada);
		cout << "Morada alterada com sucesso" << endl;
		pause();
	}
		break;
	case 4: {
		string temp;
		int horasEx;
		cout << "Qual o numero das horas extra?" << endl;
		getline(cin, temp);
		horasEx = atoi(temp.c_str());
		funcionarios[numeracao - 1]->setHorasExtra(horasEx);
		cout << "Horas extra alteradas com sucesso" << endl;
		pause();
	}
		break;
	case 5: {
		string temp;
		int salario;
		cout << "Qual o novo salario?" << endl;
		getline(cin, temp);
		salario = atoi(temp.c_str());
		funcionarios[numeracao - 1]->setSalario(salario);
		cout << "Salario alterado com sucesso" << endl;
		pause();
	}
		break;
	case 6: {
		string especializacao;
		cout << "Qual a nova especializacao?" << endl;
		getline(cin, especializacao);
		funcionarios[numeracao - 1]->setTipo(especializacao);
		cout << "Especializacao alterada com sucesso" << endl;
		pause();
	}
	case 7: {
		int opcao, nrvei;

		cout << "adicionar veiculo--------1" << endl;
		cout << "Remover veiculo----------2" << endl;
		cin >> opcao;
		if (opcao == 1) {
			cout << "Veiculos disponiveis para adicionar" << endl;
			for (unsigned int i = 0; i < veiculos.size(); i++) {
				cout << i + 1 << veiculos[i]->getMarca() << endl;
			}
			cout << "Selecione veiculo para adicionar" << endl;
			cin >> nrvei;
			funcionarios[numeracao - 1]->getVeiculos().push_back(
					veiculos[nrvei - 1]);

		} else {
			if (opcao == 2) {
				cout << "Veiculos do funcionario para remover" << endl;
				for (unsigned int i = 0;
						i < funcionarios[numeracao - 1]->getVeiculos().size();
						i++) {
					cout << i + 1
							<< funcionarios[numeracao - 1]->getVeiculos()[i]->getMarca()
							<< endl;
				}
				cout << "Selecione veiculo para retirar" << endl;
				cin >> nrvei;
				funcionarios[numeracao-1]->getVeiculos().erase(funcionarios[numeracao-1]->getVeiculos().begin()+(nrvei-1));

			}

		}
	}
		break;

	}

}



