//Programa que escriba en pantalla los 100 primeros cubos usando la propiedad de nicómano, o sea, sumando los números impares naturales de cada cubo

#include <iostream>
#include <cmath>

using namespace std;
int main(){

	int i, j, impar=1, resultado=0;

	cout << "Aquí se muestran los 100 primeros cubos de Nicómano" <<endl;
	
	for (i=1; i<=100; i++){//Iniciamos contadores, i recorre los impares y j la cantidad de impares
		for (j=0; j<i; j++){
			resultado+=impar; //acumulamos impares
			impar+=2;
		}
	//mostramos
	cout << resultado << endl;
	resultado=0;
	}
	
}
