#include <typeinfo>
#include <string>
#include "Guardia_Real.h"

using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister{
	
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
		Lannister(string, string, string, int,  int, int);

		string getJefe_Familia();
		void setJefe_Familia(string);

		string getAnimal_Emblema();
		void setAnimal_Emblema(string);

		string getLema();
		void setLema(string);

		Guardia_Real* getGuardia_Real();
		void setGuardia_Real(Guardia_Real* guardia_real);

		int getDinero();
		void setDinero(int);

		int getFuerza_Montania();
		void setFuerza_Montania(int);

		int getCantidad_Integrantes();
		void setCantidad_Integrantes(int);

		string toString();
		
		~Lannister();
};

#endif