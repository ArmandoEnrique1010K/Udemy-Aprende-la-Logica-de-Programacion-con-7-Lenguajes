
public class ProgramaPrincipal {

	public static void main(String args[]) {
		// Tipo Entero
		int miEntero = 10;
		System.out.println("Mi entero: " + miEntero);
		System.out.println("Entero tamanio bits: " + Integer.SIZE);
		System.out.println("Entero tamanio minimo: " + Integer.MIN_VALUE);
		System.out.println("Entero tamanio maximo: " + Integer.MAX_VALUE);
		
		// Tipo Long (la letra l o L es opcional)
		long miLong = 100L;
		System.out.println("Mi long: " + miLong);
		System.out.println("Long tamanio bits: " + Long.SIZE);


		// Tipo Flotante (la letra f o F indica que es flotante)
		float miFlotante = 6.5F;
		System.out.println("Mi flotante: " + miFlotante);
		System.out.println("Float tamanio bits: " + Float.SIZE);
		System.out.println("Float valor minimo: " + Float.MIN_VALUE);
        System.out.println("Float valor maximo: " + Float.MAX_VALUE);
		
		// Tipo Double (la letra d o D de doble es opcional)
		double miDoble = 10.7;
		System.out.println("Mi doble: " + miDoble);
		System.out.println("Doble tamanio bits: " + Double.SIZE);
		
		// Tipo char
		char miCaracter = 'A';
		System.out.println("Mi caracter: " + miCaracter);
		System.out.println("char tamanio bits: " + Character.SIZE);
		
		// Tipo boolean
		boolean miBoleano = true;
		System.out.println("Mi boleano: " + miBoleano);
		// Su tamanio depende de cada JVM (Java Virtual Machine) 
		
		// Mi cadena (String)
		String miCadena = "Hola Mundo";
		System.out.println("Mi cadena: " + miCadena);
		System.out.println("Largo cadena: " + miCadena.length());
	}
}

