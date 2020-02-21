#include "Starks.h"
#include "Familia_Noble.h"
#include <typeinfo>

using namespace std;

Starks::Starks(){
	
	jefe_familia="";
	lobos_huargos=0;
	animal_emblema="";
	lema="";
	Familia_Noble * familia_noble=new Familia_Noble(); 
	cantidad_integrantes=0;

}

Starks::Starks(string jefe_familia,int lobos_huargos,string animal_emblema ,string lema, Familia_Noble * familia_noble, int cantidad_integrantes){
	this->jefe_familia=jefe_familia;
	this->lobos_huargos=lobos_huargos;
	this->animal_emblema=animal_emblema;
	this->lema=lema;
	this->familia_noble=familia_noble;
	this->cantidad_integrantes=cantidad_integrantes;
}

string Starks::getJefe_Familia(){
	return jefe_familia;
}

void Starks::setJefe_Familia(string jefe_familia){
	this->jefe_familia=jefe_familia;
}

int Starks::getLobos_Huargos(){
	return lobos_huargos;
}

void Starks::setLobos_Huargos(int lobos_huargos){
	this->lobos_huargos=lobos_huargos;
}

string Starks::getAnimal_Emblema(){
	return animal_emblema;
}

void Starks::setAnimal_Emblema(string animal_emblema){
	this->animal_emblema=animal_emblema;
}

Familia_Noble* Starks::getFamila_Noble(){
	return familia_noble;
}

void Starks::setFamilia_Noble(Familia_Noble *  familia_noble){
	this->familia_noble=familia_noble;
}

int Starks::getCantidad_Integrantes(){
	return cantidad_integrantes;
}

void Starks::setCantidad_Integrantes(int cantidad_integrantes){
	this->cantidad_integrantes=cantidad_integrantes;
}

Starks::~Starks(){
	
}