#include <typeinfo>
#include <string>

using namespace std;

#ifndef Familia_Noble_H
#define Familia_Noble_H

class Familia_Noble{
	
	private: 

		string nombre;
		string simbolo_escudo;
		string lema;
		int ataque;
		int defensa;

	public: 

		Familia_Noble();
		Familia_Noble(string, string, string, int, int);

		string getNombre();
		void setNombre(string);

		string getSimbolo_Escudo();
		void setSimbolo_Escudo(string);

		string getLema();
		void setLema(string);

		int getAtaque();
		void setAtaque(int);

		int getDefensa();
		void setDefensa(int);

		~Familia_Noble();
};

#endif