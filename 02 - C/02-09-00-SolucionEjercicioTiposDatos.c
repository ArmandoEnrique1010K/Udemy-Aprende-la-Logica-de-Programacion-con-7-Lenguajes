#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1. Definimos las variables a utilizar
	int edad;
	bool empleadoConfianza;
	int empleadoConfianzaTemp;
	int largoCadena = 50;
	char nombreCompleto[largoCadena];
	float sueldo;
	// 2. solicitar los valores al usuario
	printf("Proporciona tu nombre: \n");
	scanf("%[^'\n']s", nombreCompleto);
	printf("Proporciona tu edad: \n");
	scanf("%d", &edad);
	printf("Proporciona tu sueldo (USD): \n");
	scanf("%f", &sueldo);
	printf("Eres empleado de confianza (1/0)? \n");
	scanf("%d", &empleadoConfianzaTemp);
	empleadoConfianza = empleadoConfianzaTemp;
	
	// 3. Imprimimos la informacion
	printf("\nLa informacion proporcionada es:");
	printf("\nNombre: %s", nombreCompleto);
	printf("\nEdad: %d", edad);
	printf("\nSueldo: $%.2f", sueldo);
	printf("\nEmpleado de confianza: %d", empleadoConfianza);
	
	return 0;
}

