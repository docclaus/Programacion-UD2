//Programa para calcular el máximo común divisor de dos números enteros
#include <iostream>

using namespace std;

int main(){
	
	int a, b, resto;

	cout << "Calcule su máximo común divisor. Inserte dos números:  " << endl;
	cin >> a >> b; //guarda los valores
	resto=a%b; //esta es la formula para obtener el resto
	while (resto!=0){ //insertamos las probabilidades que darían por valido el bucle while. 
		a=b;
		b=resto;
		resto=a%b;
	}			
	cout << b << endl; //salida en pantalla	
}
	
