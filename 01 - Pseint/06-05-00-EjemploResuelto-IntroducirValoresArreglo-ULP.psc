Algoritmo IntroducirValoresArreglo
	// Programa que pedira al usuario n valores
	Definir numero_elementos, numeros Como Entero
	// Solicitamos cuantos numeros queremos proporcionar
	Imprimir 'Proporciona el tamaño del arreglo: '
	Leer numero_elementos 
	// Podemos validar que el valor sea mayor que cero (no puede ser 0 o negativo)
	// Creamos nuestro arreglo de la cantidad de elementos proporcionado
	Dimension numeros[numero_elementos]
	// Solicitamos las numeros al usuario
	// recordemos que el indice de un arreglo inicia en 0
	// por ello recorremos del indice cero al numero_elementos - 1
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Imprimir 'Proporciona el valor ', i + 1, ' del arreglo: '
		Leer numeros[i]
	FinPara
	// Mostramos los elementos
	Imprimir 'Estos son los valores almacenados en el arreglo.'
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Imprimir 'Valor [', i, '] = ' numeros[i]
	FinPara
	
FinAlgoritmo
