#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

	private:
		int projetos;
	public:
		Engenheiro(std::string Nome, double valorSalario,int projetos, double horaTrabalhada);
		void setProjetos(int numeroDeProjetos);
		int getProjetos();
		void imprime();


};

