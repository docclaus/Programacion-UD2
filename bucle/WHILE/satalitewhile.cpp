//Ejercicio para darle ordenes en satélite con números enteros que terminan la transmisión con un número negativo usando while.

#include<iostream>
using namespace std;
int main(){

	int dato=0;

	cout << "Hola usuario, introduce tu dato. " << endl;
	//bucle indicando que guarde el dato bajo la condición de que para poder ejecutar por completo debe introducir un número menor que 0
	while (dato>=0) {
		cin >> dato; 
		cout << "Recibido el dato:  " << dato << endl;
	} 

	cout << "Fin de la transmisión. " << endl;
}
