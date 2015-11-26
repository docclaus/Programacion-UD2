//ejercicio para hacer la tabla del 7 con while
#include<iostream>
using namespace std;
int main(){

	int x=1;
	
	cout << "¡Esto es la tabla del 7!" << endl;
	while (x<=10) { //solo es hasta 10 porque es el máximo de la tabla{
		cout << "7 x  " << x << " = " << 7*x << endl; //esta es la sentencia mostrada
		x=x+1; //formula a seguir
	}
}
