//Programa para crear una calculadora, dejando la opción a elegir que tipo de operación te interesa//

#include <iostream>
using namespace std;

int main(){


	double x, y, z;
	char a;	

	cout << "Introduce primer numero: " << endl;
	cin >> x;

	cout << "Introduce segundo numero: " << endl;
	cin >> y;

	
	//para ahorrar saltos de línea y línea de código//
	cout << "Introduce: \ns para sumar \nr para restar  \nm para multiplicar  \nd para dividir " << endl;
	cin >> a;
 	switch (a)
      	{
		case 's': z=x+y; // sumar //
         	break;
		case 'r': z=x-y; //restar//
            	break;
		case 'm': z=x*y; //multiplicar//
            	break;
		case 'd': z=x/y; //dividir//
            	break;
		default: cout << "No se ha realizado la operación porque no se ha introducido el comando adecuado. " << endl;
	}
	
		
		cout << "El resultado es: " << z << endl;

}
