#include "Dragones.h"
#include <typeinfo>

using namespace std;

Dragones::Dragones(){
	
	nombre="";
	color="";
	tamanio=0;
	distancia_llama=0;
	ataque=0;
	defensa=0;

}

Dragones::Dragones(string nombre, string color, int tamanio, int distancia_llama, int ataque, int defensa){
	this->nombre=nombre;
	this->color=color;
	this->tamanio=tamanio;
	this->distancia_llama=distancia_llama;
	this->ataque=ataque;
	this->defensa=defensa;
}

string Dragones::getNombre(){
	return nombre;
}

void Dragones::setNombre(string nombre){
	this->nombre=nombre;
}

string Dragones::getColor(){
	return color;
}

void Dragones::setColor(string color){
	this->color=color;
}

int Dragones::getTamanio(){
	return tamanio;
}

void Dragones::setTamanio(int tamanio){
	this->tamanio=tamanio;
}

int Dragones::getDistancia_LLama(){
	return distancia_llama;
}

void Dragones::setDistancia_LLama(int distancia_llama){
	this->distancia_llama=distancia_llama;
}

int Dragones::getAtaque(){
	return ataque;
}

void Dragones::setAtaque(int ataque){
	this->ataque=ataque;
}

int Dragones::getDefensa(){
	return defensa;
}

void Dragones::setDefensa(int defensa){
	this->defensa=defensa;
}

Dragones::~Dragones(){
	
}