/* Programa para resolver una ecuación de segundo grado */

#include <iostream>
#include <cmath> // para usar raiz cuadrada con sqrt //
using namespace std;

int main() 
{
	double a=0;
	double b=0;
	double c=0;
	double positivo=0;
	double negativo=0;
	int n=2;

	cout << "Tu programa para resolver ecuaciones de segundo grado!" << endl;
	cout << "ingresa el valor de a" << endl;
	cin >> a;
	cout << "ingresa el valor de b" << endl;
	cin >> b;
	cout << "ingresa el valor de c" << endl;
	cin >> c;
	
	if (a!=0){

		positivo=(-b+(sqrt(pow(b, n)-(4*a*c))))/(2*a); 
		negativo=(-b-(sqrt(pow(b, n)-(4*a*c))))/(2*a); /* la formula aplicada al codigo en positivo y negativo */
		cout << "x1 es igual a: " << positivo << endl;
		cout << "x2 es igual a: " << negativo << endl;
	}
	else
		cout << "Solo una de las x " << -c/b << endl;

}
