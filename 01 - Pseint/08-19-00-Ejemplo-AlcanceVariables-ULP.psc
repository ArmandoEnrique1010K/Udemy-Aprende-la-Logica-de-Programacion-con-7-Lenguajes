Funcion cambio(variable_local_funcion, a)
	variable_local_funcion = 20
	a = 30
	Imprimir 'Variable local a la funcion: ', variable_local_funcion
	Imprimir 'Variable a (funcion): ', a_funcion
FinFuncion

Algoritmo AlcanceVariables
	// Ejercicio Alcance de Variables
	variable_local = 10
	a = 15
	cambio(variable_local, a)
	Imprimir 'Variable local al programa principal: ', variable_local
	Imprimir 'Variable a (principal): ', a
	
FinAlgoritmo
