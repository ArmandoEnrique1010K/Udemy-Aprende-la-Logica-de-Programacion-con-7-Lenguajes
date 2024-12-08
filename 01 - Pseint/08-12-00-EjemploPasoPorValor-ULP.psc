Funcion cambiarValor(parametro)
//Funcion cambiarValor(parametro Por Valor)
	Imprimir 'Antes dentro funcion - parametro: ', parametro
	parametro = 20
	Imprimir 'Despues dentro funcion - parametro: ', parametro
FinFuncion

Algoritmo PasoPorValor
	// Ejercicio de Paso Por Valor
	argumento = 10
	Imprimir 'Antes llamar funcion - argumento: ', argumento
	cambiarValor(argumento)
	Imprimir 'Despues llamar funcion - argumento: ', argumento
	// Conclusion: Se pasa solo una copia del valor a la funcion
	// Los cambios hechos en la funcion (parametro) 
	//no afectan al argumento (variable fuera de la funcion)	
FinAlgoritmo
