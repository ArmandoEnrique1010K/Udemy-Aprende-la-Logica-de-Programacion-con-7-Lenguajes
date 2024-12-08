Algoritmo FactorialRecursivo
	// Factorial 5!
	resultado_factorial = factorial(5)
	Imprimir "El factorial de 5 es: ", resultado_factorial
	
FinAlgoritmo

Funcion retorno <- factorial(_numero)
	// Caso Base
	Si _numero == 0 Entonces
		retorno = 1
	SiNo
		// Llamada recursiva que tiende al Caso base
		retorno = _numero * factorial(_numero - 1)
		Imprimir 'Llamada recursiva -> ', _numero, ' * factorial(', _numero, ' - 1) = ', retorno
	FinSi
FinFuncion
	