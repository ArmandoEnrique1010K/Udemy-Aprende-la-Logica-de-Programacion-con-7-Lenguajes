import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Algoritmo dia de la semana
        System.out.print("Proporciona el dia de la semana: ");
        var diaSemana = Integer.parseInt(new Scanner(System.in).nextLine());
        // Revisar que dia de la semana es
        if (diaSemana == 1)
            System.out.println("Lunes");
        else if (diaSemana == 2)
            System.out.println("Martes");
        else if (diaSemana == 3 )
            System.out.println("Miercoles");
        else if (diaSemana == 4)
            System.out.println("Jueves");
        else if (diaSemana == 5)
            System.out.println("Viernes");
        else if (diaSemana == 6)
            System.out.println("Sabado");
        else if (diaSemana == 7)
            System.out.println("Domingo");
        else
            System.out.println("Valor de dia erroneo: " + diaSemana);
    }
}