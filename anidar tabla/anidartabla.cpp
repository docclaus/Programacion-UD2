//Programa para poder mostrar en pantalla 10 tablas de multiplicar seguidas


#include <iostream>

using namespace std;

int main(){

	int x, y;
	// Como el ejercicio pide una cantidad determinada de cuantas tablas debe haber, usamos un buble for
	for (x=0; x<=10; x++){
		cout << endl; //para crear una separación entre las tablas y que no salgan juntas
		for (y=0; y<=10; y++) //lo que he hecho ha sido anidar un bucle con otro, indicando que la x e y sean menor e igual que 10, haciendo que se vayan incrementando hasta esa cantidad y salga del bucle y salga en pantalla el cout siguiente
			cout << x << " x " << y << " = " << x*y << endl; //salida en pantalla
	}
}
