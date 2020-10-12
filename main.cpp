#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <iostream>
#include <vector>
#include <fstream>

int main() {
	/*Eu criei um arquivo de entrada. Ele lê os dois primeiros números 
	que são a quantidade de Engenheiros e a quantidade de vendedores respectivamete.
	Esses valores controlam os laços de repetição. 
	A cada entrada lida os valores de um novo engenheiro são sobrescritos
	Isso elimina os números mágicos de entrada. 
	Bastando rodar make run para o programa executar*/
	
	int numEngenheiros,numVendedores;
	std::string nome,lixo;
	double salario;
	int projetos;
	double horas;
	double cotas;
	
	std::cin >> numEngenheiros >> numVendedores;
	
	getline(std::cin,lixo);
	
	for(int i=0;i<numEngenheiros;i++){
		getline(std::cin,nome,';');
		std::cin >> salario;
		std::cin >> projetos;
		std::cin >> horas;
		Engenheiro aux (nome, salario,projetos,horas);
		aux.imprime();
		getline(std::cin,lixo);
	}
	
	for(int i=0;i<numVendedores;i++){
		getline(std::cin,nome,';');
		std::cin >> salario;
		std::cin >> cotas;
		std::cin >> horas;
		Vendedor aux (nome, salario,cotas,horas);
		aux.imprime();
		getline(std::cin,lixo);
		if(i+1 != numVendedores){
			std::cout << std::endl;
		}
	}
	
	return 0;	
}