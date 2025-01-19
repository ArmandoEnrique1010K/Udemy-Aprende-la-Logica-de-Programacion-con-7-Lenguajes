#include <iostream>

using namespace std;

int main() {
	
	// Obtener el largo de una cadena
	string cadena = "Hola Mundo";
	
	cout << "Largo cadena: " << cadena.length() << endl;
	
	// Recorrer la cadena
	for (int i = 0; i < cadena.length(); i++){
		cout << i << " - " << cadena[i] << endl;
	}
	
	return 0;
}
