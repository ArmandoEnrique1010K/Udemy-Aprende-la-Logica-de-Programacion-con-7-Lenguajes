import java.util.Scanner;
public class ProgramaPrincipal {

    public static void main(String args[]){
        //Crear un objeto de la clase ProgramaPrincipal
        //var objeto1 = new ProgramaPrincipal();

        // Clase Scanner para obtener la entrada del usuario
        var consola = new Scanner(System.in);

        // Leer un tipo de dato entero
        System.out.print("Proporciona un entero: ");
        //var entero = consola.nextInt();
        var entero = Integer.parseInt( consola.nextLine() );
        System.out.println("Mi entero: " + entero);

        // Consumir el caracter de salto de linea debido a que nextInt no lo hizo
        //consola.nextLine();

        System.out.println("Proporciona una cadena: ");
        var cadena = consola.nextLine();
        System.out.println("Mi cadena: " + cadena);

    }
}
