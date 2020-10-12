#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string Nome, double valorSalario,int projetos, double horaTrabalhada){
	this->setNome(Nome);
	this->setSalarioHora(valorSalario);
	this->setProjetos(projetos);
	this->setHorasTrabalhadas(horaTrabalhada);
}
void Engenheiro::setProjetos(int numeroDeProjetos){
	this->projetos = numeroDeProjetos;
}
int Engenheiro::getProjetos(){
	return this->projetos;
}

void Engenheiro::imprime(){
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;
  std::cout << "Projetos: " << this->getProjetos() << std::endl;
  std::cout << std::endl;
}