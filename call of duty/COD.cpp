// Ejercicio 2.9 dice: la circunferencia se puede determinar con 3 valores reales, los dos primeros corresponden al centro y el tercero al radio. El programa consiste en hacer que pueda leer la posición de dos circunferencias y escribir la información de su  relación.

#include <iostream>
#include <cmath>
using namespace std;

	int main(){
	int distcent=0, difrad=0, sumrad=0; //distcent es la distancia al centro, disfrad es la diferencia de radios y sumrad es la suma de radios
	int x0=0, y0=0, r1=0; //circunferencia 1
	int x1=0,  y1=0, r2=0; //circunferencia 2
	cout << "introduzca los datos del primer circulo en el orden de:\nx, y, radio. Separados por un espacio\n";
	cin >> x0 >> y0 >> r1;
	cout << "introduzca los datos del segundo circulo en el orden de:\nx, y, radio. Separados por un espacio\n";
	cin >> x1 >> y1 >> r2;
	distcent=sqrt(pow((x1-x0), 2) + pow((y1-y0), 2)); //Esta variable almacena la distancia de los centros
	sumrad = r1+r2; //Esta variable almacena la suma de los radios
	difrad = r1-r2; //Esta almacena la resta de los radios
	if (distcent == 0){ //preguntamos si la distancia es igual a cero, si es asi tendran el mismo centro
		cout<< "Tienen el mismo centro\n";
		if (r1 == r2) 
			cout << "son la misma circunferencia\n";
		else if (r1 > r2)
			cout << "r1 contiene a r2\n";
		else 
			cout << "r2 contiene a r1\n";		
		    }
	else if ((difrad < distcent) && (distcent < sumrad))
		cout << "Ambos circulos se cortan\nTienen dos puntos de corte\nTienen distinto centro\n";
	else if (distcent == difrad)
		cout << "Son tangentes por dentro\nTienen un punto de corte\nTienen distinto centro\n";
	else if (distcent == sumrad)
		cout << "Son tangentes por fuera\nTienen un punto de corte\nTienen distinto centro\n";
	else if((distcent < difrad) || (distcent>sumrad))
		cout << "Son independientes\n";
	else if (r1 > r2)
		cout << "r1 contiene a r2\nTienen distinto centro\n";
	else
		cout << "r2 contiene a r1\nTienen distinto centro\n";
}


