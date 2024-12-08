public class ProgramaPrincipal {

    public static void main(String[] args){
        //Declaracion un arreglo de enteros
        int[] enteros;
        // Reservamos espacio memoria
        enteros = new int[5];
        // Modificar los valores de un arreglo
        enteros[0] = 13;
        enteros[1] = 21;
        enteros[4] = 62;

        // Imprimir los valores
        System.out.println("Valor 1 Arreglo[0] = " + enteros[0]);
        System.out.println("Valor 2 Arreglo[1] = " + enteros[1]);
        System.out.println("Valor 3 Arreglo[2] = " + enteros[2]);
        System.out.println("Valor 4 Arreglo[3] = " + enteros[3]);
        System.out.println("Valor 5 Arreglo[4] = " + enteros[4]);

        // Si imprimimos la variable del arreglo
        System.out.println("Arreglo enteros: " + enteros);
    }
}