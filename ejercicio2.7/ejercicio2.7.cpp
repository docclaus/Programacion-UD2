//Programa que lea tres números reales, calcules el máximo de ellos y lo escriba en la salida estandar//

#include <iostream>

using namespace std;

int main(){

	double a, b, c, valorM; //valorM es el valor Máximo//
	
	cout << "Este es tu programa para calcular máximos. " << endl;
	cout << "Introduzca los 3 números reales:  " << endl;
	cin >> a >> b >> c;
	
	if (a>=b && a>=c)
		valorM=a;
		else if (b>=c && b>=a)
			valorM=b;
	else
		valorM=c;
	cout << "El número máximo es:  " << valorM << endl;
}
