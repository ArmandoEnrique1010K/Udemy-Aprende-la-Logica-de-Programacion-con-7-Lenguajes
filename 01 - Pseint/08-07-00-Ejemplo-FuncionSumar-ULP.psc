// Definimos nuestra funcion de suma
Funcion resultado_suma <- sumar(a, b)
	// Cuerpo de la Funcion 
	resultado_suma = a + b
FinFuncion

Algoritmo ProgramaPrincipal
	// Solicitamos los valores de los argumentos
	Imprimir 'Proporciona el valor del primer argumento: '
	Leer arg_a
	Imprimir 'Proporciona el valor del segundo argumento: '
	Leer arg_b
	// Llamamos a nuestra funcion de sumar
	resultado = sumar(arg_a, arg_b)
	Imprimir 'Resultado de la suma: ', resultado
FinAlgoritmo
