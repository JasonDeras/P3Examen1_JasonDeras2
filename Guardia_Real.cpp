#include "Guardia_Real.h"

#include <typeinfo>

using namespace std;

Guardia_Real::Guardia_Real(){
	
	nombre="";
	edad=0;
	ataque=0;
	defensa=0;
	tipo=0;

}

Guardia_Real::Guardia_Real(string nombre, int edad,int ataque, int defensa, int tipo){
	this->nombre=nombre;
	this->edad=edad;
	this->ataque=ataque;
	this->defensa=defensa;
	this->tipo=tipo;
}

string Guardia_Real::getNombre(){
	return nombre;
}

void Guardia_Real::setNombre(string nombre){
	this->nombre=nombre;
}

int Guardia_Real::getEdad(){
	return edad;
}

void Guardia_Real::setEdad(int edad){
	this->edad=edad;
}

int Guardia_Real::getAtaque(){
	return ataque;
}

void Guardia_Real::setAtaque(int ataque){
	this->ataque=ataque;
}

int Guardia_Real::getDefensa(){
	return defensa;
}

void Guardia_Real::setDefensa(int defensa){
	this->defensa=defensa;
}

int Guardia_Real::getTipo(){
	return tipo;
}

void Guardia_Real::setTipo(int tipo){
	this->tipo=tipo;
}

Guardia_Real::~Guardia_Real(){

}
	