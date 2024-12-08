import java.util.Scanner;

public class ProgramaPrincipal {

    public static void main(String[] args){
        // Definimos las variables
        int renglones, columnas;
        var consola = new Scanner(System.in);
        // Definimos matriz
        System.out.print("Proporciona los renglones: ");
        renglones = Integer.parseInt(consola.nextLine());
        System.out.print("Proporciona las columnas: ");
        columnas = Integer.parseInt(consola.nextLine());
        // Declaramos la matriz
        int[][] matriz = new int[renglones][columnas];
        // Solicitar los valores al usuario
        for(int ren=0; ren < renglones ; ren++){
            for(int col=0; col < columnas; col++){
                System.out.print("Dato[" + ren + "][" + col + "] = ");
                matriz[ren][col] = Integer.parseInt(consola.nextLine());
            }
        }
        // Iteramos la matriz
        System.out.println("-----Iteramos la Matriz ------");
        for(int ren = 0; ren < renglones; ren++ ){
            for(int col=0; col < columnas; col++ ){
                System.out.print("Matriz[" + ren + "][" + col + "]=" + matriz[ren][col] + " ");
            }
            System.out.println();
        }
    }
}