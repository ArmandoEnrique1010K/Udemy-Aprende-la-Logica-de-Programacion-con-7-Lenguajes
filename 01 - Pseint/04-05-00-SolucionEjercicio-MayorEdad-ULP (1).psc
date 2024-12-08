Algoritmo MayorEdad
	EDAD_ADULTO = 18
	Imprimir 'Proporciona tu edad: '
	Leer edad_persona
	// Revisamos si la persona es mayor de edad
	Si edad_persona >= EDAD_ADULTO Entonces
		Imprimir 'La persona con edad ', edad_persona, ' es un adulto'
	SiNo
		Imprimir 'La persona con edad ', edad_persona, ' es menor de edad'
	Fin Si
	
FinAlgoritmo
