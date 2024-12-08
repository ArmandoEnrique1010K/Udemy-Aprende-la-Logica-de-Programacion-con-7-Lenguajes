public class ProgramaPrincipal {

    public static void main(String args[]){
        // Tipo entero
        var miEntero = 10;
        System.out.println("Mi entero: " + miEntero);

        // Tipo long (l o L indica literal tipo long)
        var miLong = 100L;
        System.out.println("Mi long: " + miLong);

        // Tipo Flotante (f o F indica literal tipo float)
        var miFlotante = 6.5F;
        System.out.println("Mi flotante: " + miFlotante);

        // Tipo double (d o D indica literal tipo double)
        var miDoble = 10.7;
        System.out.println("Mi doble: " + miDoble);

        // Tipo char
        var miCaracter = 'A';
        //char miCaracter = 65;
        System.out.println("Mi caracter: " + miCaracter);

        // Tipo boolean (true o false)
        var miBoleano = true;
        System.out.println("Mi boleano: " + miBoleano);

        // Tipo String (Clase)
        var miCadena = "Hola Mundo";
        System.out.println("Mi cadena: " + miCadena);
        System.out.println("Largo cadena: " + miCadena.length());
        //miCadena = 10; error, no podemos cambiar el tipo de dato

    }
}
