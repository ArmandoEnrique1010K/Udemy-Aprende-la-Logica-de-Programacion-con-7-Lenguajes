#include <iostream>
using namespace std;

int main() {
	// Algoritmo Mayor Edad
	const int EDAD_ADULTO = 18;
	// Solicitamos la edad al usuario
	cout << "Proporciona tu edad: " << endl;
	int edadPersona;
	cin >> edadPersona;
	// Revisamos si es mayor de edad
	if (edadPersona >= EDAD_ADULTO){
		cout << "Persona con edad " << edadPersona << " es un adulto" << endl;
	}
	else{
		cout << "Persona con edad " << edadPersona << " es menor de edad" << endl;
	}
	
	return 0;  
}

