//Ejercicio de repetición de una frase en bucle. En este caso hasta 10 veces.
#include<iostream>
using namespace std;
int main(){

	int frase=1; //para dejar claro que mínimo debe haber 1 para realizar el bucle

	do {
		cout << "No debo copiar en clase. " << endl;
		frase=frase+1; //variable acumuladora
	} while (frase<=10); //el tope es 10
}
