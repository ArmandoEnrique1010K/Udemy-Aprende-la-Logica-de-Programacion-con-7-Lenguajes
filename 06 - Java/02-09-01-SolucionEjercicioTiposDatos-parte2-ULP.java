import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Accedemos a la consola
        var consola = new Scanner(System.in);
        // Leer los valores
        System.out.print("Proporciona tu nombre: ");
        var nombre = consola.nextLine();
        System.out.print("Proporciona tu edad: ");
        var edad = Integer.parseInt(consola.nextLine());
        System.out.print("Proporciona tu sueldo (USD): ");
        var sueldo = Float.parseFloat(consola.nextLine());
        System.out.println("Eres un empleado de confianza (true/false): ");
        var empleadoDeConfianza = Boolean.parseBoolean(consola.nextLine());

        // Imprimir los valores
        System.out.println("La informacion proporcionada es: ");
        System.out.println("Nombre: " + nombre);
        System.out.println("Edad: " + edad);
        System.out.println("Sueldo: " + sueldo);
        System.out.println("Empleado de confianza: " + empleadoDeConfianza);

    }
}
