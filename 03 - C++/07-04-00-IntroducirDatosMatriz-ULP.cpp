#include <iostream>
using namespace std;

int main() {
	// Definimos las variables
	int renglones, columnas;
	// Definimos matriz
	cout << "Proporciona los renglones: " ;
	cin >> renglones;
	cout << "Proporciona las columnas: ";
	cin >> columnas;
	
	// Declaramos la matriz
	//int matriz[renglones][columnas];
	int **matriz = new int*[renglones];
	for (int i = 0 ; i < renglones ; i++){
		matriz[i] = new int[columnas];
	}
	
	// solicitar los valores al usuario
	for(int ren=0; ren < renglones ; ren++){
		for(int col=0; col < columnas; col++){
			cout << "Dato[" << ren << "][" << col << "] = " ;
			cin >> matriz[ren][col];
		}
	}
	
	// Iteramos la matriz
	cout << "-----Iteramos la Matriz ------" << endl;
	for(int ren = 0; ren < renglones; ren++ ){
		for(int col=0; col < columnas; col++ ){
			cout << "Matriz[" << ren << "][" << col << "] = " << matriz[ren][col] << endl; 
		}
		cout << endl;
	}
	
	// Eliminamos la memoria solicitada
	for (int i = 0; i < renglones; i++){
		delete [] matriz[i];
	}
	delete [] matriz;
	
	return 0;
}

