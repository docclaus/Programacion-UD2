// Programa para calcular si un número es primo o no

#include <iostream>

using namespace std;

int main(){
 	
	int a=0, num, i; 

	// num es el numero entero 
	// un numero primo es aquel que tan solo tiene dos divisores exactos, como el 1 y el mismo número
	// el 2 es el único número par que es primo, ya que solo es divisible por si mismo y por 1 
	// i es el incrementador o el contador del ciclo, que nos dará cada uno de los divisores
	// a correspondría al contador general de cuantos divisores tiene el ciclo

	cout << "Hola usuario, este programa te dirá si un número es primo o no \n";
	cout << "Por favor ingrese el número que desee:  " << endl;
	cin >> num; //el número que indique el usuario para guardarlo
	for (i=1; i<=(num+1);i++){ 
		if (num%i==0){ //este if provoca que de un residuo de 0 y hace que el contador "a" aumente
			a++;
		}
	}	
		if (num==1)
			cout << "El número uno no se considera ni primo, ni compuesto" << endl;
		else if (a!=2) //se da esta condición debido a que son dos divisores exactos por definición de los números primos, para que solo sea él y el 1
			cout << "No es primo" << endl;
		else
			cout << "Si es primo" << endl;
}
