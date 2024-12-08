import java.util.Scanner;

public class ProgramaPrincipal {
    
    // Definimos la funcion suma
    static int sumar(int a, int b) {
        int resultadoSuma = a + b;
        return resultadoSuma;
    }

    public static void main(String[] args){
        var consola = new Scanner(System.in);
        System.out.print("Proporciona el valor del primer argumento: ");
        var argA = Integer.parseInt(consola.nextLine());
        System.out.print("Proporciona el valor del segundo argumento: ");
        var argB = Integer.parseInt(consola.nextLine());
        // Llamamos a la funcion sumar
        var resultado = sumar(argA,argB);
        System.out.println("Resultado de la suma: " + resultado);
    }
}