public class ProgramaPrincipal {

    public static void main(String[] args){
        // Convertir numero a cadena
        int a = 10, b = 20;
        // Imprime la suma
        System.out.println(a + b);
        // convertirmos los valores enteros a tipo cadena
        System.out.println(String.valueOf(a) + Integer.toString(b));
        // Otra forma es usando String format
        String resultado = String.format("%d %d", a, b);
        System.out.println(resultado);
    }
}