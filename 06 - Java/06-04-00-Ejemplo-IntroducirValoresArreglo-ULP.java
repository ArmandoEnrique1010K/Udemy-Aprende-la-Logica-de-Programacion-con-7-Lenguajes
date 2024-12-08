import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String[] args){
        // Introducir valores a un arreglo
        var consola = new Scanner(System.in);

        // Declarar el arreglo
        System.out.print("Proporciona el largo del arreglo: ");
        var largoArreglo = Integer.parseInt(consola.nextLine());
        // Creamos el arreglo de manera dinamica
        int[] enteros = new int[largoArreglo];

        // Solicitamos los valores
        for(int i = 0; i < largoArreglo; i++){
            System.out.print("Proporciona enteros[" + i + "] = ");
            enteros[i] = Integer.parseInt(consola.nextLine());
        }

        // Imprimir los valores del arreglo
        System.out.println("\nImpresion del Arreglo: ");
        for(int i=0; i < enteros.length ; i++){
            System.out.println("enteros[" + i + "] = " + enteros[i]);
        }
    }
}