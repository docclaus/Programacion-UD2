//Considere el ejemplo anterior eliminando las dos llaves de la sentencia if. Si el usuario ejecuta el programa con el dato 0, ¿Qué salida obtendrá?//

#include <iostream>
using  namespace std;

int main(){

	int dato;
	
	cout << "Introduzca un valor entero " << endl; //en el ejemplo pone escrito que sea un valor distinto de cero//
	cin >> dato;
	if(dato!=0)
		cout << "Ha escrito " << dato << " que es distinto de cero" << endl;
		cout << " Es un alumno muy obediente" << endl;

	if (dato==0) 
		cout << "Ups! que desobediente..." << endl;
}
//La conclusión es que si introduces como dato el valor c0 y quitas los parentesis (o llaves) te salen las dos sentencias a la vez en vez de solo una si introduces otro valor//
