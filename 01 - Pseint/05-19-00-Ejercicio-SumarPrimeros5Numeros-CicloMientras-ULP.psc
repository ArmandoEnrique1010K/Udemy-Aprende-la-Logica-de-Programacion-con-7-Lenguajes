Algoritmo SumarPrimeros5NumerosCicloMientras
	// Realizar el mismo ejercicio de sumar primeros 5 numeros pero con el ciclo Mientras 
	Definir numero, acumulador_suma, max Como Entero
	acumulador_suma = 0
	max = 5 
	numero = 1 // Se inicializa fuera del ciclo
	Mientras numero <= max Hacer
		Imprimir '(acumulador_suma + numero) = ', acumulador_suma, ' + ', numero 
		acumulador_suma = acumulador_suma + numero
		Imprimir 'Suma parcial acumulada: ', acumulador_suma
		// No existe un paso como en el ciclo Para
		// Por lo que debemos incrementar manualmente el numero
		numero = numero + 1
	Fin Mientras
	//Imprimimos la suma acumulada total (fuera del ciclo)
	Imprimir 'Suma acumulada total: ', acumulador_suma 
	
FinAlgoritmo
