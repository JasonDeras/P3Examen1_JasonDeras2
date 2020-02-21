#include <typeinfo>
#include <string>
#include "Dragones.h"
using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen{
	
	private: 

		string reina;
		string animal_emblema;
		string lema;
		Dragones* dragones;
		int cantidad_barcos;

	public: 

		Targaryen();
		Targaryen(string, string,  string, Dragones* dragones, int barcos);

		string getReina();
		void setReina(string);

		string getAnimal_Emblema();
		void setAnimal_Emblema(string);

		string getLema();
		void setLema(string);

		Dragones* getDragones();
		void setDragones(Dragones *dragones);

		int getCantidad_Barcos();
		void setCantidad_Barcos(int);

		~Targaryen();
};

#endif