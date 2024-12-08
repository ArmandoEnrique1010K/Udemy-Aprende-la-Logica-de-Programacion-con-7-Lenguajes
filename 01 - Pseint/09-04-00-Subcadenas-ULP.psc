Algoritmo FuncionesCadenasCaracteres
	// Definimos una cadena de caracteres
	Definir variable_cadena Como Cadena
	// Asignamos un valor
	variable_cadena = "Hola Mundo"
	Imprimir 'Cadena Ejemplo: ', variable_cadena
	
	// Obtenemos la longitud de una cadena
	// El inidice comienza en cero, igual que los arreglos
	Imprimir 'Longitud cadena: ', Longitud(variable_cadena)
	
	// Obtener una subcadena de la cadena principal
	mi_subcadena = SubCadena(variable_cadena, 0, 3)
	Imprimir 'Subcadena1: ', mi_subcadena
	mi_subcadena = Subcadena(variable_cadena, 5, 9)
	Imprimir 'Subcadena2: ', mi_subcadena 
FinAlgoritmo
