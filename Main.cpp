#include "Starks.h"
#include "Familia_Noble.h"
#include "Lannister.h"
#include "Guardia_Real.h"
#include "Targaryen.h"
#include "Dragones.h"
#include <iostream>

using namespace std;

int menu_Principal(){
	int opcion;

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

	cout<<"1. Crear Familia"<<endl;
	cout<<"2. Crear Soldado"<<endl;
	cout<<"3. Listar Ejercito"<<endl;
	cout<<"Ingrese una opcion: ";
	cint>>opcion;
	cout<<endl;
	return opcion;


}//Fin del menu de las familias
int main(){

	int usuario=1;
	int opcion;

	while(usuario==1){
		opcion=menu_Principal();

		switch(opcion){

			case 1:
			break;

			case 2:
			break;

			case 3:
				usuario=2;
			break;

			default:
				cout<<"Opcion no valida"<<endl;
			break;
		}//Fin del switch 

		if(usuario==2){
			break;
		}else{ 
			cout<<"Volver al menu [1.-Si/2.-No]: ";
			cin>>usuario;
		}
	}//Fin del while 
	
	return 0;

}//Fin del main 