//algoritmo para hacer cualquier tabla de multiplicar
#include<iostream>
using namespace std;
int main(){

	int x, num, mult, r;
	
	cout << "¡Bienvenidos a las tablas de multiplicar!" << endl;
	cout << "Escribe el número del 1 al 10 la tabla que quieres conocer: " << endl;
	cin >> x; // guardar dato del número de la tabla 
	num=1;
	do {
		mult=x*num;  //formula para dejar claro los calculos al programas
		cout << x << "*" << num << " = " << mult << endl; //esta es la sentencia mostrada
		num=num+1;
	} while (num<=10); //solo es hasta 10 porque es el máximo de la tabla
	

	//do {
	//	cout << "¿Desea realizar otra operación? (si=1, no=2)" << endl;
	//	cin >> r;
//	} while ((r<1||r>2) || (r==1)); <- intenté crear un bucle para poder realizar varias operaciones, está sin terminar.
}


	

