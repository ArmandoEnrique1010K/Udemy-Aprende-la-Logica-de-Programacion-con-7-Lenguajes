#include<iostream>
using namespace std;

int main() {
	
	// 1. Declaramos la variable
	int entero;
	// 2. Solicitamos la entrada
	cout << "Proporciona un numero: ";
	cin >> entero;
	
	// 3. Desplegamos el valor
	cout << "Valor Entero: " << entero << endl;
	
	// 1. Declara variable
	string nombre;
	// 2. Indicamos al usuario que proporcione la informacion
	cout << "Proporciona tu nombre: " << endl;
	// 3. Leemos la informacion del usuario
	// Lee hasta el leer el caracter de espacio
	//cin >> nombre;
	// Lee la linea completa (incluyendo espacios)
	cin.ignore(); // Se utiliza para limpiar caracteres en el buffer
	getline(cin, nombre);
	// 4. Mandamos a imprimir la informacion proporcionada
	cout << "Tu nombre es: " << nombre << endl;
	return 0;
}

