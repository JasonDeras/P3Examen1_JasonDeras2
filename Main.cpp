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

//Contadores que ayudan con las familias
int contador_Starks=0;

//Lista de Familia noble
Familia_Noble ** lista_familia_noble = new Familia_Noble *[10];//arreglo de 10 usuarios
int cantiadad_nobles=0;




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
        							cout<<"Ya no hay espacio disponible en el arreglo para guardar nobñe"<<endl; 
    							}//Fin del if que valida si estan lleno el arreglo de usuarios
							break;}

							default:{
								cout<<"Opcion no valida"<<endl;
							break;}

						}//Fin del case de la creacion del soldado


					break;}//Fin del caso dos del menu de familiaas

					case 3:{

						switch(menu_Listar()){

							case 1:{

								cout<<"Starks.cpp"<<endl;
								cout<<starks->toString()<<endl;
								cout<<"Familas nobles"<<endl;
									string lema;
									int ataque;
									int defensa;
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

			delete starks;
			break;

		}else{ 
			cout<<"Volver al menu principal[1.-Si/2.-No]: ";
			cin>>usuario;
			cout<<endl;
		}
	}//Fin del while 

	delete starks;
	
	return 0;

}//Fin del main 