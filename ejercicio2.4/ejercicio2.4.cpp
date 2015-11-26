// Programa que lea un número real, correspondiente al radio de un círculo. Como resultado, escribirá el radio introducido, el área del círculo, y la longitud de su perímetro. Además, comprobará si el radio no es positivo, en cuyo caso se obtendrá un mensaje informado sobre ello//

#include <iostream>
#include <cmath>

using namespace std;

int main(){

//Fórmulas: área= pi*r2; longitud=2*pi*r//
	
	double radio=0.0, area=0.0, longitud=0.0;
	double const PI=3.14159265;

	cout << "Introduzca el valor del radio: " << endl;
	cin >> radio;
	
	
	if (radio>=0){ 
		
		area=PI*pow(radio, 2); //las formulas a aplicar//
		longitud=2*PI*radio;

		cout << "Tu valor del área es:  " << area << endl;
		cout << "Tu valor de la longitud es:  " << longitud << endl;
	}

	else  //la única condición posible es que el radio sea menor que 0//
		
		cout << "Tu radio ha salido con valor negativo  " << radio << endl;
	
}



	
