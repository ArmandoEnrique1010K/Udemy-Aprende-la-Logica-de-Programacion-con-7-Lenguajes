Algoritmo SerieFibonacciConArreglos
	// Serie de Fibonacci con Arreglos
	Imprimir 'Cuantos numeros de la serie de Fibonacci deseas: '
	Leer tamanio_arreglo
	// Creamos el arreglo
	Definir arreglo Como Entero
	Dimension arreglo[tamanio_arreglo]
	// Los primeros dos valores son 1 y 1
	arreglo[0] = 1
	arreglo[1] = 1
	// Los siguientes valores se calculan con el algoritmo
	// Comienza en 2 por que ya tenemos los 2 primeros valores de arreglo
	// Se puede validar que se pidan mas de 2 valores, sino marca error
	Para i = 2 Hasta tamanio_arreglo - 1 Hacer
		//Calculamos el nuevo valor, es la suma de dos valores anteriores
		arreglo[i] = arreglo[i-2] + arreglo[i-1]
		// Ya no hay necesidad de respaldar ningun valor
		// por que ya estan guardados los valores en el arreglo y no se pierden
	FinPara
	//Imprimimos los valores recorriendo nuevamente el arreglo
	Para i = 0 Hasta tamanio_arreglo - 1 Hacer
		Imprimir i + 1, '. Valor de la serie  [', i, '] = ', arreglo[i]
	FinPara
	
FinAlgoritmo
