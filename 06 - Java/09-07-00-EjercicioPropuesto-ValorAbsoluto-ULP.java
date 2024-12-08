import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String[] args){
        System.out.print("Proporciona un valor numerico: ");
        var numero = Integer.parseInt(new Scanner(System.in).nextLine());
        var numeroAbs = Math.abs(numero);
        System.out.println("Valor absoluto de " + numero + " es: " + numeroAbs);
    }
}