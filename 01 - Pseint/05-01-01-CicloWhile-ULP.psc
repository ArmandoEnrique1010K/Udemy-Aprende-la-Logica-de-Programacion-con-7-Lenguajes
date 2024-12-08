Algoritmo CicloWhile
	
	// Necesidad de ciclos (loops o blucles)
	
	// Imprimir 5 veces Buenos dias
	Imprimir 'Buenos dias'
	Imprimir 'Buenos dias'
	Imprimir 'Buenos dias'
	Imprimir 'Buenos dias'
	
	// Eso no es practico, por lo que para ello tenemos los ciclos
	// Necesitamos una variable llamada contador
	// Y tambien una variable que tenga el numero de repeticiones
	Definir contador, numero_repeticiones Como Entero
	// Establecemos el numero de repeticiones a ejecutar
	numero_repeticiones = 5
	Mientras contador < numero_repeticiones Hacer
		Imprimir 'Buenos dias...', contador
		// Si no incrementamos el contador dentro del ciclo
		// se crea un ciclo infinito
		contador = contador + 1
		// Imprimimos la condicion despues del incremento
		condicion = contador < numero_repeticiones
		Imprimir contador, ' < ', numero_repeticiones, ' = ', condicion 
	Fin Mientras
	Imprimir 'Ya estamos fuera de ciclo mientras...'
	
FinAlgoritmo
