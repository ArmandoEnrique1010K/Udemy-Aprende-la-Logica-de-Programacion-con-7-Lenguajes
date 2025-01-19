#include <iostream>
using namespace std;

// Cambiar valor (paso por referencia)
void cambiarValor(int *parametro){
	*parametro = 20;
}

int main() {
	// Ejemplo paso por referencia
	int argumento = 10;
	cout << "Antes llamar funcion: " << argumento << endl;
	cambiarValor( &argumento );
	cout << "Despues llamar funcion: " << argumento;
	
	return 0;
}

