#include "Familia_Noble.h"

#include <typeinfo>

using namespace std;

Familia_Noble::Familia_Noble(){
	
	nombre="";
	simbolo_escudo="";
	lema="";
	ataque=0;
	defensa=0;

}

Familia_Noble::Familia_Noble(string nombre, string simbolo_escudo ,string lema, int ataque, int defensa){
	this->nombre=nombre;
	this->simbolo_escudo=simbolo_escudo;
	this->lema=lema;
	this->ataque=ataque;
	this->defensa=defensa;
}

string Familia_Noble::getNombre(){
	return nombre;
}

void Familia_Noble::setNombre(string nombre){
	this->nombre=nombre;
}

string Familia_Noble::getSimbolo_Escudo(){
	return simbolo_escudo;
}

void Familia_Noble::setSimbolo_Escudo(string simbolo_escudo){
	this->simbolo_escudo=simbolo_escudo;
}

string Familia_Noble::getLema(){
	return lema;
}

void Familia_Noble::setLema(string lema){
	this->lema=lema;
}

int Familia_Noble::getAtaque(){
	return ataque;
}

void Familia_Noble::setAtaque(int ataque){
	this->ataque=ataque;
}

int Familia_Noble::getDefensa(){
	return defensa;
}

void Familia_Noble::setDefensa(int defensa){
	this->defensa=defensa;
}

Familia_Noble::~Familia_Noble(){
	
}