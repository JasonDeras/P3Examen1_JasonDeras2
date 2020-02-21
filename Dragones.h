#include <typeinfo>
#include <string>
using namespace std;

#ifndef DRAGONES_H
#define DRAGONES_H

class Dragones{
	
	private: 

		string nombre;
		string color;
		int tamanio;
		int distancia_llama;
		int ataque;
		int defensa;

	public: 

		Dragones();
		Dragones(string, string, int, int, int, int);

		string getNombre();
		void setNombre(string);

		string getColor();
		void setColor(string);

		int getTamanio();
		void setTamanio(int);

		int getDistancia_LLama();
		void setDistancia_LLama(int);

		int getAtaque();
		void setAtaque(int);

		int getDefensa();
		void setDefensa(int);

		~Dragones();
};

#endif