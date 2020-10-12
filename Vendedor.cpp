#include <iostream>
#include <cstdlib>
#include <string>
#include "Vendedor.hpp"

Vendedor::Vendedor(std::string Nome, double valorSalario,double valorQuotaDeVendas, double horaTrabalhada){
	this->setNome(Nome);
	this->setSalarioHora(valorSalario);
	this->setQuotaMensalVendas(valorQuotaDeVendas);
	this->setHorasTrabalhadas(horaTrabalhada);
}

double Vendedor::getQuotaMensalVendas(){
	return this->quotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double valorQuotaDeVendas){
	this->quotaMensalVendas = valorQuotaDeVendas;
}

double Vendedor::quotaTotalAnual() {
	return getQuotaMensalVendas() * NUMERO_MESES_ANO;
}

void Vendedor::imprime(){
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes() << std::endl;  
  std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
}