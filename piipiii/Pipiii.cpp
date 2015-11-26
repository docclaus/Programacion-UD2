//Programa para comprobar que la siguiente expresión -1pown/(2n+1)pow3 obtiene con poco sumandos una aproximación aceptable del número pi

#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double resultado, acumulado=0;
	int i, n; //i de incremento y n de la potencia que se pedirá al usuario

	for (i=0;i<=100;i++){
		acumulado=0;
		for (n=0;n<=i;n++){
			resultado= 1.0/pow((2*n+1), 3);
			acumulado+= (n % 2==0) ?resultado:-resultado;
		}
		acumulado*=32;
		cout << "Valor con " << i << "sumandos:  " << pow(acumulado, 1.0/3) << endl;
	}
}




switch (a){
case 'b':
if
break;
case'r'
if ((x=x+n) && (y=y+n) || 
