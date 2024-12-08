import java.util.Scanner;

public class ProgramaPrincipal {

    // Definimos de la funcion
    static void saludar(String mensaje){
        System.out.println("Mensaje: " + mensaje);
    }

    public static void main(String[] args){
        // Ejercicio para definir una funcion
        System.out.print("Proporciona el mensaje a mostrar: ");
        var mensajeArg = new Scanner(System.in).nextLine();
        // Llamamos a la funcion
        saludar(mensajeArg);
    }
}