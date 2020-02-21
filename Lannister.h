#include <typeinfo>
#include <string>
#include "Guardia_Real.h"
using namespace std;

#ifndef LANNISTER_H
#define STARKS_H

class LANNISTER_H{
	
	private: 

		string jefe_familia;
		string animal_emblema;
		string lema;
		Guardia_Real * guardia_real; 
		int dinero;
		int fuerza_montania;
		int cantidad_integrantes;

	public: 

		Lannister();
		Lannister(string, string, string, Guardia_Real* guardia_real, int,  int, int);

		string getJefe_Familia();
		void setJefe_Familia(string);

		string getAnimal_Emblema();
		void setAnimal_Emblema(string);

		string getLema();
		void setLema(string);

		Guardia_Real* getFamila_Noble();
		void setFamilia_Noble(Guardia_Real* guardia_real);

		int gerDinero();
		void setDinero();

		int getFuerza_Montania();
		void setFerza_Montani();
		
		int getCantidad_Integrantes();
		void setCantidad_Integrantes(int);

		~Lannister();
};

#endif