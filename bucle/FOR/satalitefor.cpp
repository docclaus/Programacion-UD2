//Ejercicio para darle ordenes en satélite con números enteros que terminan la transmisión con un número negativo usando bucle for.

#include<iostream>
using namespace std;
int main(){

	int dato;
	cout << "Hola usuario, introduce tu dato. " << endl;
	for(int i=0;  (i<=2); i++) { //se introduce la condición y las actualizaciones
		cin >> dato; //es la sentencia que quiera introducir el usuario
		cout << "Recibido el dato:  " << dato << endl; //recibe el dato porque la condición es true y sale esta sentencia
			if (dato>=0) {
				i=0;
				cout << "Su operación se está procesando... " << dato << endl; //creo este if para reiniciar el contador del for haciendolo ilimitado
			}
			else 
				i=15; //así forzamos a que se cumpla la condición de salida ya que el hecho de introducir un dato menor que cero pide salir del bucle
	}

	cout << "Fin de la transmisión. " << endl;
}
