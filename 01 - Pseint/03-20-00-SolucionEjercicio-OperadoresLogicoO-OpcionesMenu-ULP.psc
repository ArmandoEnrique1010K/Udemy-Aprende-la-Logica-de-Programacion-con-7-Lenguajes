Algoritmo OpcionesMenu
	// Verificar si se proporciono una opcion del menu mostrado
	Imprimir 'Seleccione una de estas opciones: '
	Imprimir '1. Sumar'
	Imprimir '2. Multiplicar'
	Imprimir '3. Salir'
	Leer seleccion
	expresion_logica = seleccion == 1 O seleccion == 2 O seleccion == 3
	Imprimir 'La seleccion ', seleccion,' es una opcion valida?: ', expresion_logica
FinAlgoritmo
