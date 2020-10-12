#include <string>
#include "Empregado.hpp"
#define NUMERO_MESES_ANO 12

class Vendedor : public Empregado {

	private:
		double quotaMensalVendas;
	public:
		Vendedor(std::string Nome, double valorSalario,double valorQuotaDeVendas, double horaTrabalhada);
		double getQuotaMensalVendas();
		void setQuotaMensalVendas(double valorQuotaDeVendas);
		double quotaTotalAnual() ;
		void imprime();
};
