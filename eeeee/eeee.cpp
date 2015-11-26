//Programa para comprobar que la expresion analítica de e se obtiene con pocos sumandos de una aproximación aceptable (de 4 decimales). Pide el número de sumandos y escriba el resultado del cálculo

#include <iostream>

using namespace std;
int main(){
	
	double e=2.7182, sumatoria=0.0, expE;
	int n, i, j, fact=1;

	cout << "En este programa se comprobará que la serie de e es correcta." << endl;
	do{
		//El factorial de un número es el producto de todos los números enteros hasta n. 
		cout << "Introduzca su número para empezar a calcular su factorial:  " << endl;
		cin >> n; //número que introduce el usuario para hacer su factorial, x.
	}while(n<0); //porque no se pueden números negativos, uso este bucle
	// se aplicará un bucle for
		if (n==0)
			cout << "Por definición el factorial de ese número es 1" << endl;
		else{
			for (i=0; i<=n; i++){	
				fact=1;
				for (j=1; j<=i && i!=0; j++){
					fact=j*fact;
				}
			expE=1.0/fact;
			sumatoria=expE+sumatoria;
			}
		cout << "Su valor con...  " << n << " sumandos es:  " << sumatoria << endl;			
		cout << "Comprobación con la diferencia mínima con el número e:  " << e-sumatoria << endl;
		}
}	
	
