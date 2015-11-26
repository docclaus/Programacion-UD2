//Programa para calcular si un número es cuadrado perfecto
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int num, n=0, resultado=0; //num es la variable para que la guarde el programa elegido por el usuario, n el incremento y resultado el total
	bool ozelui=false; //Bandera
	
	cout << "Hola usuario, escoja un número para saber si es cuadrado perfecto:  " <<endl;
	cin >> num;
	// un número es cuadrado perfecto si solo si, dando como resultado de su raiz un número natural
	while (resultado < num){
		resultado=pow(n, 2); //va haciendo incremento en el while con el if hasta conseguir salir para dar la condición de false
		n++;
		if (num==resultado)
			ozelui=true;
	}

	if (ozelui)
		cout << "El número elegido es un cuadrado perfecto" << endl;
	else 
		cout << "El número elegido NO es un cuadrado perfecto" << endl;
}
