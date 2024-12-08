Funcion cambiarValor(parametro Por Referencia)
//Funcion cambiarValor(parametro)
	Imprimir 'Antes dentro funcion - parametro: ', parametro
	// Hacemos un cambio al parametro dentro de la funcion
	parametro = 20
	Imprimir 'Despues dentro funcion - parametro: ', parametro
FinFuncion

Algoritmo PasoPorReferencia
	// Ejercicio de Paso Por Referencia
	argumento = 10
	Imprimir 'Antes llamar funcion - argumento: ', argumento
	cambiarValor(argumento)
	Imprimir 'Despues llamar funcion - argumento: ', argumento
	// Conclusion: Se pasa la referencia del argumento al parametro (funcion) 
	// Los cambios hechos en la funcion (parametro) 
	// SI afectan al argumento (variable fuera de la funcion)	
FinAlgoritmo
