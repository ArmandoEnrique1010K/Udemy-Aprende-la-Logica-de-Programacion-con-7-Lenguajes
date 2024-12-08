Algoritmo EtapasVida
	Definir mensaje Como Cadena
	Imprimir 'Proporciona tu edad: '
	Leer edad
	// Empezamos a procesar la edad con la etapa de vida respectiva
	Si edad >= 0 Y edad <= 10 Entonces
		mensaje = 'La infancia es increible'
	SiNo
		Si edad > 10 Y edad <= 20 Entonces
			mensaje = 'Muchos cambios, mucho estudio...'
		SiNo
			Si edad > 20 Y edad <= 30 Entonces
				mensaje = 'Amor y comienza el trabajo...'
			SiNo
				mensaje = 'Etapa de vida no registrada'
			Fin Si
		Fin Si
	Fin Si
	//Imprimir la informacion
	Imprimir 'Tu edad es: ', edad, ' ', mensaje
	
FinAlgoritmo
