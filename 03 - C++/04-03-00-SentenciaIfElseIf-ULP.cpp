#include <iostream>
using namespace std;

int main() {
	// Sentencia If-else
	int numero = 10;
	// Verificamos si es un valor positivo
	if (numero > 0){
		cout << "Valor positivo: " << numero << endl; 
	}
	else if (numero < 0){
		cout << "Valor negativo: " << numero << endl;
	}
	else{
		cout << "Valor Cero: " << numero << endl;
	}
	
	return 0;
}

