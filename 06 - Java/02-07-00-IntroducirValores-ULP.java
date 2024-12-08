import java.util.Scanner;
public class ProgramaPrincipal {

    public static void main(String args[]){
        //Crear un objeto de la clase ProgramaPrincipal
        //ProgramaPrincipal objeto1 = new ProgramaPrincipal();

        // Clase Scanner para obtener la entrada del usuario
        Scanner consola = new Scanner(System.in);
        System.out.print("Proporciona una cadena: ");
        var cadena = consola.nextLine();
        System.out.println("Mi cadena: " + cadena);
    }
}
