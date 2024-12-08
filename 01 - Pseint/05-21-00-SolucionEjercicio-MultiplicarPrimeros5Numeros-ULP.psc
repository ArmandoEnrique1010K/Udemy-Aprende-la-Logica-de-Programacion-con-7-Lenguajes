Algoritmo MultiplicarPrimeros5Numeros
	// Multiplicar los primeros 5 numeros 
	Definir numero,acumulador_mul Como Entero
	// Iniciamos la variable de acumulador_mul
	acumulador_mul = 1
	Para numero = 1 Hasta 5 Con Paso 1 Hacer
		// Imprimimos lo que se va a multiplicar (sin que se altere todavia el resultado)
		Imprimir '(acumulador_mul * numero_var) = ', acumulador_mul,' * ',numero
		// Realizamos la multiplicacion parcial
		acumulador_mul = acumulador_mul * numero
		// Imprimimos la multiplicacion parcial acumulada
		Imprimir 'Multiplicacion parcial acumulada: ', acumulador_mul
	FinPara
	// Despues del ciclo Para, imprimimos la multiplicacion acumulada (iterativa)
	Escribir 'La multiplicacion acumulada de los primeros 5 numeros es: ',acumulador_mul
FinAlgoritmo
