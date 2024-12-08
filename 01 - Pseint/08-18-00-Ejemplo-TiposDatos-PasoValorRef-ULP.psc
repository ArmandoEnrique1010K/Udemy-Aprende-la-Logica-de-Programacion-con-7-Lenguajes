Funcion cambio(parametro)
	//parametro = 20 // los numeros se pasan por valor
	//parametro = Falso // los logicos se pasan por valor
	//parametro = 'b' // los caracter se pasan por valor
	//parametro = "Adios" // las cadenas se pasan por valor 
	//parametro[0] = 20 // los arreglos se pasan por referencia por default
	parametro[0,0] = 20
FinFuncion

Algoritmo ProbarTiposDatosValorReferencia
	// Vamos a probar los tipos de datos para saber si estamos pasando por valor o por referencia
	//argumento = 10 //los numeros se pasan por por valor por default
	//argumento = Verdadero // los logicos se pasan por valor por default
	// argumento = 'a' // los caracter se pasan por valor
	//argumento = "Hola" // las cadenas se pasan por valor
	//Dimension argumento[1] // Los arreglos se pasan por referencia por default
	//argumento[0] = 10
	Dimension argumento[1,1]
	argumento[0,0] = 10
	
	Imprimir 'Antes de llamar la funcion: ', argumento[0,0]
	cambio(argumento)
	Imprimir 'Despues de llamar la funcion:', argumento[0,0]
	
FinAlgoritmo
