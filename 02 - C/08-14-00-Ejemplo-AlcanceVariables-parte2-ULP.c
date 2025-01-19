#include <iostream>
using namespace std;
	
// Variables globales
int variableGlobal = 5;
int a = 10;

int main() {
	// Ejercicio Alcance Variables
	// Variable local
	int variableLocal = 20;
	cout << "Variable global a (principal) = " << a << endl;
	// Modificamos la variable global
	a = 30;
	// Llamamos a la funcion cambio
	cambio(variableLocal);
	cout << "Variable local (principal) = " << variableLocal << endl;
	cout << "Variable global a (principal) = " << a << endl;
	cout << "Variable global (principal) = " << variableGlobal << endl;
	
	
	return 0;
}
	
	
