//Escriba un programa que lea un número real correspondiente a una nota, y escriba en la salida estandar el mensaje "suspenso" (menor que 5), "Aprobado" (de 5 a 7) o "Sobresaliente" (9 o más) dependiendo del valor de la nota//

#include <iostream>

using namespace std;

int main(){

	double nota;

	cout << "Alumno, escriba su nota:  " << endl;
	cin >> nota;

	if ((nota<0)||(nota>10))
		cout << "nota invalida\n";
		else if ((nota>=0)&&(nota<5))
			cout << "Usted está suspenso, es un alumno desobediente" << endl;
			else if ((nota>=5)&&(nota<=7))
				cout << "Usted está aprobado" << endl;
				else if	((nota>7)&&(nota>=9))
					cout << "Tiene un notable" << endl;
					else
						cout << "Tiene un sobresaliente, ¡Enhorabuena!" << endl;
}
