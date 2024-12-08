// Los arreglos (incluyendo matrices) se pasan por referencia
//Funcion cambiarValor(parametro Por Referencia)
Funcion cambiarValor(parametro)
	Imprimir 'Antes dentro funcion - parametro: [', parametro[0], ', ', parametro[1], ']'
	// Hacemos un cambio al parametro dentro de la funcion
	parametro[0] = 20
	parametro[1] = 30
	Imprimir 'Despues dentro funcion - parametro: [', parametro[0], ', ', parametro[1], ']'
FinFuncion

Algoritmo PasoPorReferenciaArreglos
	// Ejercicio de Paso Por Referencia con Arreglos (o Matrices)
	Dimension argumento[2]
	argumento[0] = 10
	argumento[1] = 15
	Imprimir 'Antes llamar funcion - argumento: [', argumento[0], ', ', argumento[1], ']'
	cambiarValor(argumento)
	Imprimir 'Despues llamar funcion - argumento: [', argumento[0], ', ', argumento[1], ']'
	// Conclusion: Se pasa la referencia del argumento al parametro (funcion) 
	// Los cambios hechos en la funcion (parametro) 
	// SI afectan al argumento (variable fuera de la funcion)	
FinAlgoritmo
