import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Algoritmo dia de la semana
        System.out.print("Proporciona el dia de la semana: ");
        var diaSemana = Integer.parseInt(new Scanner(System.in).nextLine());
        // Revisar que dia de la semana es
        switch (diaSemana){
            case 1:
                System.out.println("Lunes");
                break;
            case 2:
                System.out.println("Martes");
                break;
            case 3:
                System.out.println("Miercoles");
                break;
            case 4:
                System.out.println("Jueves");
                break;
            case 5:
                System.out.println("Viernes");
                break;
            case 6:
                System.out.println("Sabado");
                break;
            case 7:
                System.out.println("Domingo");
                break;
            default:
                System.out.println("Valor de dia erroneo: " + diaSemana);
        } // Fin switch
    }
}