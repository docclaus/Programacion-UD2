// Programa para dado un número y, hayar múltiplos de x con el intervalo [a, b]

#include <iostream>

using namespace std;

int main(){

	// Lo principal es poner los valores enteros, destacamos que para saber un múltiplo en un intervalo el usuario ha de introducir los datos de los límites del intervalo y el número que quiera averiguar sus multiplos para guardalos
	int num, multi, lim_inferior, lim_superior;

	cout << "Bienvenido al programa para saber los múltiplos en un intervalo numérico. Por favor, introduzca el número que desee calcular sus multiplos:  " << endl;
	cin >> num;
	cout << "Ahora introduzca los números del intervalo númerico, prímero el inferior y luego el superior:  " << endl;
	cin >> lim_inferior >> lim_superior;
	
	for ((multi = lim_inferior); (lim_superior>=multi); multi++){ //la inicialización debe empezar con el múltiplo con el limite inferior, ya que debe poder abarcar los números enteros negativos
		if (multi%num==0) //esto sería la fórmula para calcular el multiplo de cualquier número, se aplica el condicional if para que en la salida del programa solo me cuente los multiplos del número que le pedí.
			cout << multi << endl; //salida en pantalla
	}
}
		
