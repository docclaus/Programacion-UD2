// Programa que lea un valor entero, y escriba en la salida estandar un mensaje indicando si es par o impar//

#include <iostream>
using namespace std;

int main(){

	int x;
	
	cout << "Introducir número entero: " << endl;
	cin >> x;
	
	if (x%2==0) //el % sirve para indicar una divisón//
		
		cout << "Su número " << x << " se considera par " << endl;

	else
	  	
		cout << "Su número " << x << " se considera impar " << endl; //en caso de no salir la condición anterior//
}
	
