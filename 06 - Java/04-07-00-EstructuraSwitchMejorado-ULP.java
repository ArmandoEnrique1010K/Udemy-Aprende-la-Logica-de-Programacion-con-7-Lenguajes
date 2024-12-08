import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Algoritmo dia de la semana
        System.out.print("Proporciona el dia de la semana: ");
        var diaSemana = Integer.parseInt(new Scanner(System.in).nextLine());
        // Revisar que dia de la semana es
        // A partir jdk 13
        switch (diaSemana) {
            case 1 -> System.out.println("Lunes");
            case 2 -> System.out.println("Martes");
            case 3 -> System.out.println("Miercoles");
            case 4 -> System.out.println("Jueves");
            case 5 -> System.out.println("Viernes");
            case 6 -> System.out.println("Sabado");
            case 7 -> System.out.println("Domingo");
            default -> System.out.println("Valor de dia erroneo: " + diaSemana);
        } // Fin switch
    }
}