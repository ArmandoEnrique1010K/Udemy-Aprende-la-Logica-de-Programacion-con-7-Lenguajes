#include <iostream>
using namespace std;

int main() {
	// Sentencia If-else
	int numero = 10;
	// Verificamos si es un valor positivo
	//	if (numero > 0){
	//		cout << "Valor positivo: " << numero << endl; 
	//	}
	//	else{
	//		cout << "Valor Cero o Negativo: " << numero << endl;
	//	}
	
	(numero > 0) ? cout << "Positivo" : cout << "Cero o Negativo";
	
	return 0;  
}

