#include <iostream>
using namespace std;

// Definimos la funcion (firma, definicion o prototipo)
void saludar(string);

int main() {
	// Ejercicio para definir una funcion
	string mensajeArg;
	cout << "Proporciona el mensaje a mostrar: " << endl;
	//cin >> mensajeArg;
	getline(cin, mensajeArg);
	// Llamamos a la funcion
	saludar(mensajeArg);
	
	return 0;
}

// Implementacion de la funcion (cuerpo de la funcion)
void saludar(string mensaje){
	cout << "Mensaje: " << mensaje << endl;
}
	
