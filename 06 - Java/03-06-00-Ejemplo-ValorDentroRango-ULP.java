import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String args[]){
        // Definimos variables
        var minimo = 0;
        var maximo = 5;
        // Solicitamos un valor entre 0 y 5
        var consola = new Scanner(System.in);
        System.out.print("Proporciona un dato entre 0 y 5: ");
        var dato = Integer.parseInt(consola.nextLine());
        // Verificamos si el dato esta dentro de rango
        var dentroRango = dato >= minimo && dato <= maximo;
        System.out.println("Valor dentro de rango? " + dentroRango);
    }
}
