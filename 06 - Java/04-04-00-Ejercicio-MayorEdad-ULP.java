import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        final var EDAD_ADULTO = 18;
        System.out.print("Propociona tu edad: ");
        var edadPersona = Integer.parseInt(new Scanner(System.in).nextLine());
        // Revisamos si es mayor de edad
        if (edadPersona >= EDAD_ADULTO){
            System.out.println("Persona : " + edadPersona + " es un adulto");
        }
        else if (edadPersona < 0 ){
            System.out.println("Edad " + edadPersona + " erronea ");
        }
        else{
            System.out.println("Persona: " + edadPersona + " es menor de edad");
        }
    }
}