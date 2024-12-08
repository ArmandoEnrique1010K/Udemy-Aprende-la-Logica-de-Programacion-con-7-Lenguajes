Algoritmo MayorMenorArreglo
	//Obtener el numero mayor y menor de un arreglo
	//Pedimos el numero de elementos del arreglo
	Imprimir 'Proporciona el numero de elementos del arreglo: '
	Leer numero_elementos
	// Definimos el arreglo
	Definir arreglo Como Entero
	Dimension arreglo[numero_elementos]
	//Pedimos los valores al usuario
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Imprimir 'Proporciona el valor ', i + 1, ' del arreglo: '
		Leer arreglo[i]
	FinPara
	// Buscamos el valor mayor y menor
	// Lo inicializamos con los valores del indice cero
	mayor = arreglo[0]
	menor = arreglo[0]
	Para i = 1 Hasta numero_elementos - 1 Hacer
		Si arreglo[i] > mayor Entonces
			mayor = arreglo[i]
		SiNo
			Si arreglo[i] < menor Entonces
				menor = arreglo[i]
			FinSi
		FinSi
	FinPara
	Imprimir 'Mayor: ', mayor
	Imprimir 'Menor: ', menor
	
FinAlgoritmo
