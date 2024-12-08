import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Sentencia if-else
        // Pedimos un valor
        System.out.print("Proporciona un numero: ");
        var numero = Integer.parseInt(new Scanner(System.in).nextLine());
        // Verificamos si es un valor positivo
//        if (numero > 0){
//            System.out.println("Valor positivo: " + numero);
//        }
//        else{
//            System.out.println("Valor Cero o Negativo: " + numero);
//        }
        // Operador Ternario (regresa un valor)
        var resultado = (numero > 0) ? "Positivo" : "Cero o Negativo";
        System.out.println("Resultado: " + resultado);
    }
}
