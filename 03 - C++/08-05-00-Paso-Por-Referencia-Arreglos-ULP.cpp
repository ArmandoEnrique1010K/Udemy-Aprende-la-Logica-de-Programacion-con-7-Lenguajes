#include <iostream>
using namespace std;

// Cambiar valor (paso por referencia)
void cambiarValor(int *param){
	param[0] = 4;
	param[1] = 5;
	param[2] = 6;
}

int main() {
	// Ejemplo paso por referencia
	int arg[] = {1, 2, 3};
	cout << "Antes llamar funcion: " 
		 << arg[0] << ", " << arg[1] << ", " <<arg[2] << endl;
	cambiarValor( arg );
	cout << "Despues llamar funcion: " 
		 << arg[0] << ", " << arg[1] << ", " << arg[2] << endl;
	
	return 0;
}

