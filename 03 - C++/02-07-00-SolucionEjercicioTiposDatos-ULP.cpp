#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	string nombreCompleto;
	bool empleadoDeConfianza;
	int edad;
	float sueldo;
	cout << "Proporciona tu nombre: " << endl;
	getline(cin, nombreCompleto);
	cout << "Proporciona tu edad: " << endl;
	cin >> edad;
	cout << "Proporciona tu sueldo (USD): " << endl;
	cin >> sueldo;
	cout << "Eres empleado de confianza (1-true/0-false)? " << endl;
	cin >> empleadoDeConfianza;
	cout << "\nLa informacion proporcionada es: " << endl;
	cout << "Nombre: " << nombreCompleto << endl;
	cout << "Edad: " << edad << endl;
	cout << fixed << setprecision(2);
	cout << "Sueldo: " << sueldo << endl;
	cout << "Empleado de confianza: " << empleadoDeConfianza << endl;
	return 0;
}

