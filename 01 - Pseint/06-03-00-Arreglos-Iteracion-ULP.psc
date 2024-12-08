Algoritmo Arreglos
	// Un arreglo es un conjunto de elementos que accedemos con el mismo nombre
	// En PSeInt solo acepta valores del mismo tipo segun se declara
	Definir arreglo_enteros Como Entero
	// A un arreglo tenemos que especificar cuantos elementos va a almacenar
	Dimension arreglo_enteros[5]
	// Para almacenar valores, se debe usar un indice y comienza en 0
	arreglo_enteros[0] = 13
	arreglo_enteros[1] = 21
	arreglo_enteros[2] = 62
	// No es necesario llenar todas las casillas
	
	// Ahora leemos un valor usando el indice
	Imprimir 'Valor del indice 0: ', arreglo_enteros[0]
	Imprimir 'Valor del indice 1: ', arreglo_enteros[1]

	// Ahora iteramos los 5 elementos usando un ciclo Para 
	Para indice = 0 Hasta 4 Con Paso 1 Hacer
		Imprimir 'Valor ', indice, ' = ', arreglo_enteros[indice]
	FinPara
	
FinAlgoritmo
