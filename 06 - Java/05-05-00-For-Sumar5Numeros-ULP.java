public class ProgramaPrincipal {

    public static void main(String args[]){
        // Sumar los primeros 5 numeros
        var maximo = 5;
        var acumuladorSuma = 0;

        //Iteramos los valores
        for (int numero = 1; numero <= maximo ; numero++){
            // Imprimimos lo que se va a sumar
            System.out.println("(acumuladorSuma + numero) -> " + acumuladorSuma);
            // acumuladorSuma = acumuladorSuma + numero
            acumuladorSuma += numero;

            // Imprimimos el resultado parcial
            System.out.println("Suma parcial acumulada: " + acumuladorSuma + "\n");
        }
        System.out.println("La suma de los primeros 5 numeros es: " + acumuladorSuma);
    }
}