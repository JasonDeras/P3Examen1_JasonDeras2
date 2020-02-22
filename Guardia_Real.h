#include <typeinfo>
#include <string>

using namespace std;

#ifndef GUARDIA_REAL_H
#define GUARDIA_REAL_H

class Guardia_Real{
	
	private: 

		string nombre;
		int edad;
		int ataque;
		int defensa;
		int tipo;

	public: 
		
		static const int CABALLERO=1;
		static const int JINETE=2;
		static const int ARQUERO=3;

		Guardia_Real();
		Guardia_Real(string, int, int, int,int);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getLema();
		void setLema(string);

		int getAtaque();
		void setAtaque(int);

		int getDefensa();
		void setDefensa(int);

		int getTipo();
		void setTipo(int); 

		~Guardia_Real();
};

#endif