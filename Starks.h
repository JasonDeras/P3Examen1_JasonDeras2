#include <typeinfo>
#include <string>
#include "Familia_Noble.h"
using namespace std;

#ifndef STARKS_H
#define STARKS_H

class Starks{
	
	private: 

		string jefe_familia;
		int lobos_huargos;
		string animal_emblema;
		string lema;
		Familia_Noble * familia_noble; 
		int cantidad_integrantes;

	public: 

		Starks();
		Starks(string, int, string, string,int);

		string getJefe_Familia();
		void setJefe_Familia(string);

		int getLobos_Huargos();
		void setLobos_Huargos(int);

		string getAnimal_Emblema();
		void setAnimal_Emblema(string);

		string getLema();
		void setLema(string);

		Familia_Noble* getFamila_Noble();
		void setFamilia_Noble(Familia_Noble* familia_noble);

		int getCantidad_Integrantes();
		void setCantidad_Integrantes(int);

		string toString();

		~Starks();
};

#endif