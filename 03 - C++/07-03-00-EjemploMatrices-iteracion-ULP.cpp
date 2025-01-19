#include <iostream>
using namespace std;

int main() {
	// Definimos las constantes
	const int RENGLONES = 2;
	const int COLUMNAS = 3;
	// Definimos matriz
	//int matriz[RENGLONES][COLUMNAS] = {100,200,300,400,500,600};
	int matriz[RENGLONES][COLUMNAS] = {
		{100, 200, 300}, // Primer renglon
	{400, 500, 600} // Segundo renglon
	};
	
	// Iteramos la matriz
	cout << "-----Iteramos la Matriz ------" << endl;
	for(int ren = 0; ren < RENGLONES; ren++ ){
		for(int col=0; col < COLUMNAS; col++ ){
			cout << "Matriz[" << ren << "][" << col << "] = " << matriz[ren][col] << endl; 
		}
		cout << endl;
	}
	
	return 0;
}

