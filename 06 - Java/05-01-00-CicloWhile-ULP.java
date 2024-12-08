public class ProgramaPrincipal {

    public static void main(String args[]){
        // Ciclo while
        int contador = 0, repeticiones = 3;
        while (contador < repeticiones){
            System.out.println("Buenos dias... " + contador);
            contador++;
            // Condicion a evaluar
            var condicion = contador < repeticiones;
            System.out.println(contador + " < " + repeticiones + " -> " + condicion + "\n");
        }
        System.out.println("Ya estamos fuera del ciclo while");
    }
}