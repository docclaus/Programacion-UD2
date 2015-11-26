// Programa que lea dos valores reales, y escribir en la salida estandar un mensaje indicando cual es el mayor //

#include <iostream>
using namespace std;

int main(){

	double num1, num2, numMayor;
 
	cout << "Inserte primer número: ";
	cin >> num1;
	cout << "Inserte segundo número: ";
	cin >> num2;
	if (num1 >= num2) // la condición que quiero indicar para que haya un número mayor//
		numMayor= num1;
	else 
		numMayor= num2; // la alternativa si la primera sentencia no es el número mayor//
	cout <<  "El numero mayor es: " << numMayor << endl;
}

