#include<stdio.h>

void cambiarValor(char *parametro){
	//Se crea una nueva cadena
	//Las cadenas no se pueden modificar desde un metodo
	parametro[0] = 'A';//esto manda error
	// Y si la modificamos se crea una nueva cadena
	// en otra direccion de memoria
	parametro = "Adios";
}
	
	int main() {
		//Ejemplo de paso por valor
		//char argumento[] = "Hola";
		char *argumento = "Hola";
		printf("Antes llamar funcion: %s", argumento);
		cambiarValor( argumento );
		printf("\nDespues llamar funcion: %s", argumento);
		
		return 0;
	}
	
	
