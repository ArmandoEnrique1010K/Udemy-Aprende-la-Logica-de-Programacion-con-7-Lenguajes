import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // do-while
        var numero = 0;
        do {
            System.out.print("Proporciona un valor positivo: ");
            numero = Integer.parseInt(new Scanner(System.in).nextLine());
        } while( numero <= 0 );
        System.out.println("Valor positivo: " + numero );
    }
}