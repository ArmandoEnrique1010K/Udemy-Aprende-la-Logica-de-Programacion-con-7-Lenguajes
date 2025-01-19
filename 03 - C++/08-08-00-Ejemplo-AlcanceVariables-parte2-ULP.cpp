#include <iostream>
using namespace std;

// Variables globales
int variableGlobal = 5;
int a = 10;

// Definimos el metodo cambio
void cambio(int variableLocalFuncion){
	// Cambiamos el valor de variableLocalFuncion
	variableLocalFuncion = 40;
	// Creamos variables locales (oculta a la variable global)
	int a = 50;
	int b = 60;
	// Cambiamos la variable global
	variableGlobal = 70;
	// Impresiones 
	cout << "Variable local (funcion) = " << variableLocalFuncion << endl;
	cout << "Variable local a (funcion) = " << a << endl;
	// Scope resolution operator ::
	cout << "Variable global a (funcion) = " << ::a << endl; 
	cout << "Variable local b (funcion) = " << b << endl;
	
}
	
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
	
	
	
