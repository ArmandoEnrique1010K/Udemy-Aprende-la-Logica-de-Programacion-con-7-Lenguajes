Algoritmo EjercicioMenuOperaciones
	Imprimir 'Proporcione un numero1: '
	Leer numero1
	Imprimir 'Proporcione un numero2: '
	Leer numero2
	//Menu de Opciones
	Imprimir 'Seleccione una opcion del Menu: '
	Imprimir '1. Sumar'
	Imprimir '2. Restar'
	Imprimir '3. Multiplicar'
	Imprimir '4. Dividir'
	Imprimir '5. Salir'
	Leer opcion_menu
	//Procesar la opcion seleccionada
	Segun opcion_menu Hacer
		1: Imprimir 'Suma: ', numero1 + numero2
		2: Imprimir 'Resta: ', numero1 - numero2
		3: Imprimir 'Multiplicacion: ', numero1 * numero2
		4: Imprimir 'Dividir: ', numero1 / numero2	
		5: Imprimir 'Hasta pronto!'
		De Otro Modo:
			Imprimir 'Valor erroneo: ', opcion_menu
	Fin Segun
	
FinAlgoritmo
