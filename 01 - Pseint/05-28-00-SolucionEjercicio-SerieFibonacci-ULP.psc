Algoritmo SerieFibonacci
	// Sucesion de numeros que inicia en 1 y continua a 1, 2, 3, 5, 8, etc
	// es decir, es la suma de los dos valores anteriores
	// 0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 3 + 5 = 8, 5 + 8 = 13, 8 + 13 = 21
	// Los dos primeros valores son 1 y 1, por lo tanto se excluyen del ciclo
	Definir valor1, valor2, valor_serie, tope Como Entero
	valor1 = 1
	valor2 = 1
	tope = 30
	Para valor_serie = 1 Hasta tope Con Paso 1 Hacer
		Imprimir '(valor1 + valor2) = ', valor1, ' + ', valor2
		valor_serie = valor1 + valor2 
		Imprimir 'Nuevo Valor serie: ', valor_serie
		// Para la siguiente iteracion se deben actualizar los valores
		// El valor2 pasa a ser el valor1, y el valor nuevo de la serie pasa a ser el valor2
		valor1 = valor2 
		valor2 = valor_serie
	FinPara
	
FinAlgoritmo
