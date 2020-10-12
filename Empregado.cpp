#include <iostream>
#include <cstdlib>
#include "Empregado.hpp"
 
double Empregado::getSalarioHora(){
	return this-> salarioHora;
}

std::string Empregado::getNome(){
	return this->nome;
}

double Empregado::getHorasTrabalhadas(){
	return this->horasTrabalhadas;
}

void Empregado::setSalarioHora(double valorSalario){
	this->salarioHora = valorSalario;
}

void Empregado::setNome(std::string Nome){
	this->nome = Nome;
}

void Empregado::setHorasTrabalhadas(double horaTrabalhada){
	this->horasTrabalhadas = horaTrabalhada;
}

double Empregado::pagamentoMes() {  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
	if (horasTrabalhadas > HORAS_ESPERADAS) {
		double horasExtras = this->horasTrabalhadas - HORAS_ESPERADAS;
		this->horasTrabalhadas += horasExtras / METADE;
	}
	return this->horasTrabalhadas * salarioHora;
}