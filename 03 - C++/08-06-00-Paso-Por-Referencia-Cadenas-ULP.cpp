#include <iostream>
using namespace std;

//void cambiarValor(string param){ // se pasa una copia del valor 

// Cambiar valor (paso por referencia)
void cambiarValor(string &param){
	param = "Adios";
}

int main() {
	// Ejemplo paso por referencia
	string arg = "Hola";
	cout << "Antes llamar funcion: " << arg << endl;
	cambiarValor( arg );
	cout << "Despues llamar funcion: " << arg << endl;
	
	return 0;
}

