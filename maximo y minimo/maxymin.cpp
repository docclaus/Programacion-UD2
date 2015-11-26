//Programa para mostrar el máximo y mínimo de un número en pantalla 
#include <iostream>

using namespace std;

int main(){

	int max=0, min=0, num; //igualamos a cero para quitar valor residual
	
	for (int n=0; n<=10; n++){ //usamos bucle for debido a que limitamos una cantidad de sentencias que queremos mostrar por salida en pantalla
		cout << "Bienvenido ususario, inserte un número para obtener su máximo y mínimo:  " << endl;
		cin >> num;
		if (num>max) /
			max=num;
		if (num<min)
			min=num;
	}
	cout << min << endl;
	cout << max << endl; //salidas en pantalla
}
