#include "Starks.h"
#include "Familia_Noble.h"
#include "Lannister.h"
#include "Guardia_Real.h"
#include "Targaryen.h"
#include "Dragones.h"
#include <iostream>

using namespace std;

//Instancias de las clases
Starks* starks;
Targaryen* targaryen;
Lannister* lannister;

//Contadores que ayudan con las familias
int contador_Starks=0;
int contador_Targaryen=0;
int contador_Lannisters=0;

//Lista de Familia noble
Familia_Noble ** lista_familia_noble = new Familia_Noble *[10];//arreglo de 10 usuarios
int cantiadad_nobles=0;

//Lista de los dragones
Dragones ** dragones = new Dragones *[10];//arreglo de 10 usuarios
int cantidad_dragones=0;

//Lista de Gurdia Real
Guardia_Real ** guardia= new Guardia_Real *[10];//arreglo de 10 usuarios
int cantidad_guardas=0;

int menu_Principal(){
	
	int opcion;
	cout<<"Menu Principal"<<endl;
	cout<<"1. Familias"<<endl;
	cout<<"2. Simulacion"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl;
	return opcion;

}//Fin del menu principal

int menu_Familias(){

	int opcion;
	cout<<"Menu Familias"<<endl;
	cout<<"1. Crear Familia"<<endl;
	cout<<"2. Crear Soldado"<<endl;
	cout<<"3. Listar Ejercito"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	cout<<endl;
	return opcion;


}//Fin del menu de las familias

int menu_Listar(){

	int opcion;

	cout<<"Listar Ejercitos"<<endl;
	cout<<"1. Listar Starks"<<endl;
	cout<<"2. Listar Lannisters"<<endl;
	cout<<"3. Listar Targaryen"<<endl;
	cout<<"Ingrese una opcion: ";
	cin>>opcion;

	cout<<endl;

	return opcion;

}//Fin del menu de listar ejercitos

int main(){

	int usuario=1;
	int opcion;

	while(usuario==1){
		opcion=menu_Principal();

		switch(opcion){

			case 1:{

				switch(menu_Familias()){
					
					case 1:{

						int opcion;
						cout<<"Menu de Creacion de familias"<<endl;
						cout<<"1. Crear Starks"<<endl;
						cout<<"2. Crear Lannister"<<endl;
						cout<<"3. Crear Targaryen"<<endl;
						cout<<"Ingrese una opcion: ";
						cin>>opcion;
						cout<<endl;

						switch(opcion){

							case 1:{

								if(contador_Starks==1){
									cout<<"Ya hay una familia starks"<<endl;
								}else {

									string jefe_familia;
									int lobos_huargos;
									string animal_emblema;
									string lema;
									int cantidad_integrantes;

									cout<<"Ingrese el nommbre del jefe de familiar: ";
									cin>>jefe_familia;
									cout<<"Ingrese la cantidad de lobos huargos: ";
									cin>>lobos_huargos;
									cout<<"Ingrese el animal emblema: ";
									cin>>animal_emblema;
									cout<<"Ingrese el lema: ";
									cin>>lema;
									cout<<"Ingrese cantidad de integrantes: ";
									cin>>cantidad_integrantes;
									starks=new Starks(jefe_familia,lobos_huargos,animal_emblema,lema,cantidad_integrantes);
									contador_Starks=1;

								}//Fin del if de creacion de los starks

							break;}//Fin del creacion de los straks

							case 2:{

								if(contador_Lannisters==1){
									cout<<"Ya hay una familia lannisters"<<endl;
								}else {

									string jefe_familia;
									string animal_emblema;
									string lema;
									int dinero;
									int fuerza_montania;
									int cantidad_integrantes;


									cout<<"Ingrese el nommbre del jefe de familiar: ";
									cin>>jefe_familia;
									cout<<"Ingrese el animal emblema: ";
									cin>>animal_emblema;
									cout<<"Ingrese el lema: ";
									cin>>lema;
									cout<<"Ingrese dinero: ";
									cin>>dinero;
									cout<<"Fuerza de montaña: ";
									cin>>fuerza_montania;
									cout<<"Cantidad de integrantes: ";
									cin>>cantidad_integrantes;

									lannister=new Lannister(jefe_familia, animal_emblema,lema,dinero,fuerza_montania,cantidad_integrantes);
									contador_Lannisters=1;

								}//Fin del if de creacion de los starks
							break;}//Fin de la creacion de los lannisters

							case 3:{
								
								if(contador_Targaryen==1){
									cout<<"Ya hay una familia targaryen"<<endl;
								}else {

									string reina;
									string animal_emblema;
									string lema;
									int cantidad_barcos;

									cout<<"Ingrese la Reina: ";
									cin>>reina;
									cout<<"Ingrese animal emblema: ";
									cin>>animal_emblema;
									cout<<"Ingrese el lema: ";
									cin>>lema;
									cout<<"Ingrese cantidad de barcos: ";
									cin>>cantidad_barcos;
									targaryen=new Targaryen(reina,animal_emblema,lema,cantidad_barcos);
									contador_Targaryen=1;

								}//Fin del if de creacion de los targaryen

							break;}

							default:{
								cout<<"Opcion no valida"<<endl;
							break;}//Fin del case de creacion de las familias

						}//Fin de las opciones de crear familias

					break;}

					case 2:{
						
						int opcion;

						cout<<"Creacion de soldados"<<endl;
						cout<<"1. Crear Familia noble"<<endl;
						cout<<"2. Crear Dragones"<<endl;
						cout<<"3. Crear Guradia Real"<<endl;
						cout<<"Ingrese una opcion: "<<endl;
						cin>>opcion;
						cout<<endl;

						switch(opcion){

							case 1:{

								if(cantiadad_nobles<10){

     								string nombre;
									string simbolo_escudo;
									string lema;
									int ataque;
									int defensa;

       								cout<<"Ingrese el nombre: ";
       								cin>>nombre; 
        							cout<<"Ingrese el simbolo del escudo: ";
        							cin>>simbolo_escudo;
        							cout<<"Ingres el lema: ";
       								cin>>lema;
        							cout<<"Ingrese el ataque: ";
        							cin>>ataque;
        							cout<<"Ingrese la defensa: ";
        							cin>>defensa;
                  
        							//agregarlo a la lista
        							lista_familia_noble [cantiadad_nobles] =new Familia_Noble(nombre, simbolo_escudo, lema, ataque, defensa);
        							cantiadad_nobles++;     

        							cout<<endl<<"Se agrego el noble perfectamente"<<endl;    

     							}else{
        							cout<<"Ya no hay espacio disponible en el arreglo para guardar dragones"<<endl; 
    							}//Fin del if que valida si estan lleno el arreglo de usuarios

							break;}

							case 2:{

								if(cantidad_dragones<10){

     								string nombre;
									string color;
									int tamanio;
									int distancia_llama;
									int ataque;
									int defensa;

       								cout<<"Ingrese el nombre: ";
       								cin>>nombre; 
        							cout<<"Ingrese el color: ";
        							cin>>color;
        							cout<<"Ingrese el tamaño: ";
       								cin>>tamanio;
        							cout<<"Ingrese la distancia de la llama: ";
        							cin>>distancia_llama;
        							cout<<"Ingrese el ataque: ";
        							cin>>ataque;
        							cout<<"Ingrese la defensa: ";
        							cin>>defensa;
                  
        							//agregarlo a la lista
        							dragones [cantidad_dragones] =new Dragones(nombre,color,tamanio,distancia_llama,ataque,defensa);
        							cantidad_dragones++;     

        							cout<<endl<<"Se agrego el dragon perfectamente"<<endl;    

     							}else{
        							cout<<"Ya no hay espacio disponible en el arreglo para guardar dragones"<<endl; 
    							}//Fin del if que valida si estan lleno el arreglo de usuarios
    							
							break;}

							case 3:{
									if(cantidad_guardas<10){

     								string nombre;
									int edad;
									int ataque;
									int defensa;
									int tipo;

       								cout<<"Ingrese el nombre: ";
       								cin>>nombre; 
        							cout<<"Ingrese la edad: ";
       								cin>>edad;
        							cout<<"Ingrese el ataque: ";
        							cin>>ataque;
        							cout<<"Ingrese el defensa: ";
        							cin>>defensa;
        							cout<<"1. Caballero"<<endl;
        							cout<<"2. Jinete"<<endl;
        							cout<<"3. Arquero"<<endl;
        							cout<<"Ingrese una opcion: ";
        							cin>>tipo;
                  					
                  					if(tipo==1){
                  						//agregarlo a la lista
        							guardia [cantidad_guardas] =new Guardia_Real(nombre,edad,ataque,defensa,Guardia_Real::CABALLERO);
        							cantidad_guardas++;    
                  					}
                  					if(tipo==2){
                  						guardia [cantidad_guardas] =new Guardia_Real(nombre,edad,ataque,defensa,Guardia_Real::JINETE);
        							cantidad_guardas++;    
                  					}

                  					if(tipo==3){
                  						guardia [cantidad_guardas] =new Guardia_Real(nombre,edad,ataque,defensa,Guardia_Real::ARQUERO);
        							cantidad_guardas++;    
                  					} 

        							cout<<endl<<"Se agrego el guardia real perfectamente"<<endl;    

     							}else{
        							cout<<"Ya no hay espacio disponible en el arreglo para guardar guarida real"<<endl; 
    							}//Fin del if que valida si estan lleno el arreglo de usuarios
							break;}//Fin del guarida real

							default:{
								cout<<"Opcion no valida"<<endl;
							break;}

						}//Fin del case de la creacion del soldado


					break;}//Fin del caso dos del menu de familiaas

					case 3:{

						switch(menu_Listar()){

							case 1:{

								cout<<"Starks"<<endl;
								cout<<starks->toString()<<endl;
								cout<<"Familas nobles"<<endl;
								for(int i=0;i<cantiadad_nobles;i++){
		
									cout<<"Famlilia noble: "<<i<<endl
									<<"Nombre: "<<lista_familia_noble[i]->getNombre()<<endl
									<<"Simbolo Escudo: "<<lista_familia_noble[i]->getSimbolo_Escudo()<<endl
									<<"Lema: "<<lista_familia_noble[i]->getLema()<<endl
									<<"Ataque: "<<lista_familia_noble[i]->getAtaque()<<endl
									<<"Defensa: "<<lista_familia_noble[i]->getDefensa()<<endl;
								}
								cout<<endl;
							break;}//Caso para listar los starks

							case 2:{
									string nombre;
									int edad;
									int ataque;
									int defensa;
									int tipo;
								cout<<"Lannisters"<<endl;
								cout<<lannister->toString()<<endl;
								cout<<"Guarida Real"<<endl;
								for(int i=0;i<cantidad_guardas;i++){
				
									cout<<"Guardia Real: "<<i<<endl
									<<"Nombre: "<<guardia[i]->getNombre()<<endl
									<<"Edad: "<<guardia[i]->getEdad()<<endl
									<<"Ataque: "<<guardia[i]->getAtaque()<<endl
									<<"Defensa: "<<guardia[i]->getDefensa()<<endl
									<<"Tipo: "<<guardia[i]->getTipo()<<endl;
								}

								cout<<endl;
							break;}//Caso para listar los lannisters

							case 3:{

								cout<<"Targaryen."<<endl;
								cout<<targaryen->toString()<<endl;
								cout<<"Dragones"<<endl;
								for(int i=0;i<cantidad_dragones;i++){
		
									cout<<"Dragon: "<<i<<endl
									<<"Nombre: "<<dragones[i]->getNombre()<<endl
									<<"Color: "<<dragones[i]->getColor()<<endl
									<<"Tamanño: "<<dragones[i]->getTamanio()<<endl
									<<"Distancia de llama: "<<dragones[i]->getDistancia_LLama()<<endl
									<<"Ataque: "<<dragones[i]->getAtaque()<<endl
									<<"Defensa: "<<dragones[i]->getDefensa()<<endl;
								}
								cout<<endl;

							break;}//Fin del case para listar los targaryen

							default:{
								cout<<"Opcion no valida"<<endl;
							break;}

						}//Fin del switch para listar los ejercitos

					break;}//Fin del case para listar las familiars

					default:{
						cout<<"Opcion no valida"<<endl;
					break;}

			}//Fin del switch del menu de las familias

			break;}//Fin del caso 1 del principal

			case 2:{
			break;}

			case 3:{
				usuario=2;
			break;}//Fin del caso 3 del principal 

			default:{
				cout<<"Opcion no valida"<<endl;
			break;}

		}//Fin del switch del principal

		if(usuario==2){

						//Liberacion de lannister
				delete lannister;

				//Liberacion de guardia real
				delete[]guardia;				
				if(guardia!=NULL){
					delete []guardia;
					guardia=NULL;
				}//Liberacion de memoria

				//Liberacion de starks
				delete starks;

				//Liberacion de nobles
				delete[]lista_familia_noble;				
				if(lista_familia_noble!=NULL){
					delete []lista_familia_noble;
					lista_familia_noble=NULL;
				}//Liberacion de memoria

				//Liberacion de targaryen
				delete targaryen;

				//Libreacion de dragones
			    delete []dragones;							
				if(dragones!=NULL){
					delete []dragones;
					dragones=NULL;
				}//Liberacion de memoria
				
			break;

		}else{ 
			cout<<"Volver al menu principal[1.-Si/2.-No]: ";
			cin>>usuario;
			cout<<endl;
		}
	}//Fin del while 

	//Liberacion de lannister
	delete lannister;

	//Liberacion de guardia real
	delete[]guardia;				
	if(guardia!=NULL){
		delete []guardia;
		guardia=NULL;
	}//Liberacion de memoria

	//Liberacion de starks
	delete starks;

	//Liberacion de nobles
	delete[]lista_familia_noble;				
	if(lista_familia_noble!=NULL){
		delete []lista_familia_noble;
		lista_familia_noble=NULL;
	}//Liberacion de memoria

	//Liberacion de targaryen
	delete targaryen;

	//Libreacion de dragones
    delete []dragones;							
	if(dragones!=NULL){
		delete []dragones;
		dragones=NULL;
	}//Liberacion de memoria

	return 0;

}//Fin del main 