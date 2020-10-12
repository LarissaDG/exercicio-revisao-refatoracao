#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
#define HORAS_ESPERADAS 8
#define METADE 2

class Empregado {

	private:
		double salarioHora;
		std::string nome;
		double horasTrabalhadas;

	public:
		double getSalarioHora();
		std::string getNome();
		double getHorasTrabalhadas();
		void setSalarioHora(double valorSalario);
		void setNome(std::string Nome);
		void setHorasTrabalhadas(double horaTrabalhada);
		double pagamentoMes();

};

#endif