public class ProgramaPrincipal {

    public static void main(String[] args){
        // Arreglos en Java
        // 1. Declaracion del arreglo
        int[] enteros = {100, 200, 300, 400};
        // Iteramos los elementos del arreglo
        System.out.println("Largo arreglo: " + enteros.length);
        // Sintaxis clasica del ciclo for
        for(int i = 0; i < enteros.length; i++){
            System.out.println("enteros[" + i + "]= " + enteros[i]);
        }
        // for-each (for mejorado)
        System.out.println("For each (for mejorado)");
        for(var numero: enteros)
            System.out.println("Valor: " + numero);
    }
}