//ejercicio pro evolution soccer, haciendo que el usuario introduzca las coordenadas de la esquina superior izquierda y la de abajo superior derecha

#include <iostream>

using namespace std;
int main(){

	int tx, ty, bx, by, dx, dy; //los que introducirá el usuario
	int cx, cy, ax, ay; //los de las igualdades

	cout << "Bienvenido usuario. En este programa podrás averiguar si eres capaz de meter goles. " << endl;
	cout << "Introduzca dos valores del la esquina superior izquierda:  " << endl;
	cin >> bx >> by;
	cout << "Introduzca otros dos valores del punto interior derecha:  " << endl;
	cin >> dx >> dy;
	cout << "Y por último las coordenadas de disparo:  " << endl;
	cin >> tx >> ty;
	//tx y ty son los puntos correspondientes a la dirección del balón, bx, by se refiere a la esquina superior izquierda, dx y dy corresponde a la parte inferior derecha, cx, cy, ax y ay corresponden a los extremos restantes del rectángulo donde se podrá calcular en base a los dos pedidos en el problema
	ax=bx;
	ay=dy;
	cx=dx;
	cy=by;
	// con estas igualdades dejamos claro que esos puntos de x e y son los que coinciden dentro del rectángulo, y por tanto obtenemos las esquinas restantes
	if (((tx>bx) && (tx<dx)) && ((ty<by) && (ty>dy))) 
		cout << "¡GOOOOOOOL!" << endl;
	//este sería el escenario si estuviese dentro la pelota
	else if ((by==ty) && ((tx>=bx) && (tx<=cx)))
		cout << "¡LARRRRGUEROOOO!" << endl;
	else if ((dy==ty) && ((tx>=dx) && (tx<=ax)))
		cout << "gol raso" << endl;
	else if ((cx==tx) && ((ty<=cy) && (ty>=dy)))
		cout << "¡HA DADO EN EL PALO DERECHO!" << endl;
	else if ((bx==tx) && ((ty<=by) && (ty>=ay)))
		cout << "¡HA DADO EN EL PALO IZQUIERDO!" << endl;
	else if ((tx==bx) && (ty==by))
		cout << "¡ESCUADRA IZQUIERDAAA!" << endl;
	else if ((tx==cx) && (ty==cy))
		cout << "¡ESCUADRA DERECHA!" << endl;
	else if ((tx==ax) && (ty==ay))
		cout << " Ha dado en el palo izquierdo" << endl;
	else if ((tx==dx) && (ty==dy))
		cout << "Ha dado en el palo derecho" << endl;
	else
		cout << "¡EL BALÓN SALIÓ FUERAAAAA!" << endl;
}
		
