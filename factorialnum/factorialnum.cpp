// Programa para calcular el factorial de un número

#include <iostream>

using namespace std;

int main(){


	int x, n, factorial=1; //x es el número que introduce el usuario, n la variable de los productos del número factorial, y el factorial es el resultado total.
	cout << "Calcule el factorial de cualquier número \n";
	do{
	
		//El factorial de un número es el producto de todos los números enteros hasta n. 
		cout << "Por favor ingrese su número mayor que cero" << endl;
		cin >> x; //número que introduce el usuario para hacer su factorial, x.
	}while(x<0); //porque no se pueden números negativos, uso este bucle
	// se aplicará un bucle for
		if (x==0)
			cout << "Por definición el factorial de ese número es 1" << endl;
		else{
		for (n=1; n<=x; n++){ //como es para un uso de número concreto, uso for, siendo n que valga 1 y que siempre sea menor o igual que x ya que el factorial siempre van los números por debajo del elegido.
			factorial=n*factorial;
		}			
	}
	cout << "El factorial del número que introdujo es... " << factorial << endl;
}
