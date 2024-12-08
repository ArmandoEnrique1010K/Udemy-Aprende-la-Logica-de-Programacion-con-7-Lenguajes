Algoritmo SumarPrimeros5Numeros
	//Sumar los primeros 5 numeros 
	Definir numero, acumulador_suma Como Entero
	// Iniciamos la variable de acumulador_suma
	acumulador_suma = 0
	Para numero = 1 Hasta 5 Con Paso 1 Hacer
		// Imprimimos lo que se va a sumar (sin que se altere todavia el resultado)
		Imprimir '(acumulador_suma + numero) = ', acumulador_suma, ' + ', numero
		// Realizamos la suma parcial
		acumulador_suma = acumulador_suma + numero
		// Imprimimos la suma parcial acumulada
		Imprimir 'Suma parcial acumulada: ', acumulador_suma
	Fin Para
	//Despues del ciclo Para, imprimimos la suma acumulada (iterativa)
	Imprimir 'La suma acumulada de los primeros 5 numeros es: ', acumulador_suma
FinAlgoritmo
