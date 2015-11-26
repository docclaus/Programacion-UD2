// Programa para calcular la sumatoria de un número

#include <iostream>

using namespace std;

int main(){


	int x, n, sumatoria=0, apoyo=0; //x es el número que introduce el usuario, n la variable de los productos de la sumatoria, y sumatoria es el resultado total.
	bool ejecutado=false; // valor bandera para saber si ha habido conversión en números negativos
	cout << "Calcule la sumatoria de cualquier número \n";
	 
		cout << "Por favor ingrese su número:  " << endl;
		cin >> x; //número que introduce el usuario para hacer su factorial, x.
		apoyo=x;
		if (x<=0){ //es un apoyo para indicar que el numero introducido es positivo cuando x es menor o igual que cero
			ejecutado=true;
			apoyo = apoyo*(-1);
		}
		for (n=0; n <= apoyo; n++){ //bucle para poder realizar la sumatoria de los números indicando esas condiciones
			sumatoria=n+sumatoria;
		}	
		if (ejecutado) //este if sale si en la condición anterior era positivo el número, para hacer su conversión a negativo, dando por hecho que el bool sale false
			sumatoria = sumatoria*-1; 		
	cout << "La sumatoria del número que introdujo es... " << sumatoria << endl;
}
