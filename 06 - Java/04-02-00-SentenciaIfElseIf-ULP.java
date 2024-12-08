import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Sentencia if-else
        System.out.print("Proporciona un numero: ");
        var numero = Integer.parseInt(new Scanner(System.in).nextLine());
        // Verificamos si es un valor positivo
        if (numero > 0){
            System.out.println("Valor positivo: " + numero);
        }
        // Verificamos si es un valor negativo
        else if(numero < 0 ){
            System.out.println("Valor negativo: " + numero);
        }
        // Si no se cumplio ninguna de las opciones anterioes, es cero
        else{
            System.out.println("Valor Cero: " + numero);
        }
    }
}