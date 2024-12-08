Algoritmo CicloHacerHasta
	// Validar que el usuario proporcione un valor positivo
	// Repetir hasta que se proporcione un valor positivo
	Repetir
		Imprimir 'Proporcione un número positivo: '
		Leer numero
		Imprimir 'Condicion a evaluar: ', numero, ' > 0 = ', numero > 0
		// Se repite el ciclo hasta que la condicion sea verdadera
	Hasta Que numero > 0
	// Salimos del ciclo ya que se proporciono un valor correcto
	Imprimir 'Valor positivo proporcionado:', numero
	
FinAlgoritmo
