#include "Lannister.h"
#include "Guardia_Real.h"
#include <typeinfo>
#include <sstream>
using namespace std;

Lannister::Lannister(){
	
	jefe_familia="";
	animal_emblema="";
	lema="";
	guardia_real=new Guardia_Real(); 
	dinero=0;
	fuerza_montania=0;
	cantidad_integrantes=0;

}

Lannister::Lannister(string jefe_familia, string animal_emblema ,string lema, int dinero, int fuerza_montania, int cantidad_integrantes){
	this->jefe_familia=jefe_familia;
	this->animal_emblema=animal_emblema;
	this->lema=lema;
	this->dinero=dinero;
	this->fuerza_montania=fuerza_montania;
	this->cantidad_integrantes=cantidad_integrantes;
}

string Lannister::getJefe_Familia(){
	return jefe_familia;
}

void Lannister::setJefe_Familia(string jefe_familia){
	this->jefe_familia=jefe_familia;
}

string Lannister::getAnimal_Emblema(){
	return animal_emblema;
}

void Lannister::setAnimal_Emblema(string animal_emblema){
	this->animal_emblema=animal_emblema;
}

string Lannister::getLema(){
	return lema;
}

void Lannister::setLema(string){
	this->lema=lema;
}

Guardia_Real* Lannister::getGuardia_Real(){
	return guardia_real;
}

void Lannister::setGuardia_Real(Guardia_Real* guardia_real){
	this->guardia_real=guardia_real;
}

int Lannister::getDinero(){
	return dinero;
}

void Lannister::setDinero(int dinero){
	this->dinero=dinero;
}

int Lannister::getFuerza_Montania(){
	return fuerza_montania;
}

void Lannister::setFuerza_Montania(int fuerza_montania){
	this->fuerza_montania=fuerza_montania;
}

int Lannister::getCantidad_Integrantes(){
	return cantidad_integrantes;
}

void Lannister::setCantidad_Integrantes(int cantidad_integrantes){
	this->cantidad_integrantes=cantidad_integrantes;
}

string Lannister::toString(){

	//Cantidad del dinero
	stringstream ss;  
	ss<<dinero;  
	string s;  
	ss>>s;  

	//Cantidad de fuerza de montaña
	stringstream ss2;  
	ss2<<fuerza_montania;
	string s2;  
	ss2>>s2; 

	//Cantidad de integrantes
	stringstream ss3;  
	ss3<<cantidad_integrantes;
	string s3;  
	ss3>>s3; 
	
	string sale="Jefe de familiar: "+jefe_familia+"\n"
	+"Emblema Animal: "+animal_emblema+"\n"
	+"Lema:" +lema+"\n"
	+"Dinero: "+s+"\n"
	+"Fuerza de montaño: "+s2+"\n"
	+"Cantidad de integrantes: ;"+s3+"\n";

	return sale;
}

Lannister::~Lannister(){
	
}