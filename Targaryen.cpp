#include "Targaryen.h"
#include "Dragones.h"
#include <typeinfo>
#include <sstream>
using namespace std;

Targaryen::Targaryen(){
	
	reina="";
	animal_emblema="";
	lema="";
	dragones=new Dragones();
	cantidad_barcos=0;

}

Targaryen::Targaryen(string reina, string animal_emblema ,string lema, int cantidad_barcos){
	this->reina=reina;
	this->animal_emblema=animal_emblema;
	this->lema=lema;
	this->cantidad_barcos=cantidad_barcos;
}

string Targaryen::getReina(){
	return reina;
}

void Targaryen::setReina(string reina){
	this->reina=reina;
}

string Targaryen::getAnimal_Emblema(){
	return animal_emblema;
}

void Targaryen::setAnimal_Emblema(string animal_emblema){
	this->animal_emblema=animal_emblema;
}

string Targaryen::getLema(){
	return lema;
}

void Targaryen::setLema(string lema){
	this->lema=lema;
}

Dragones* Targaryen::getDragones(){
	return dragones;
}

void Targaryen::setDragones(Dragones* dragones){
	this->dragones=dragones;
}

int Targaryen::getCantidad_Barcos(){
	return cantidad_barcos;
}

void Targaryen::setCantidad_Barcos(int cantidad_barcos){
	this->cantidad_barcos=cantidad_barcos;
}

string Targaryen::toString(){

	//Cantidad de barcos
	stringstream ss;  
	ss<<cantidad_barcos;  
	string s;  
	ss>>s;
	
	string sale="Reina: "+reina+"\n"
	+"Animal Emblema: "+animal_emblema+"\n"
	+"Lema:" +lema+"\n"
	+"Cantidad de barcos: "+s+"\n";

	return sale;
}

Targaryen::~Targaryen(){
	
}