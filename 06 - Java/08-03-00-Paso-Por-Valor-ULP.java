public class ProgramaPrincipal {

    // Definimos la funcion
    static void cambiarValor(int parametro) {
        parametro= 20;
    }

    public static void main(String[] args){
        // Creamos las variables
        var argumento = 10;
        System.out.println("Antes llamar funcion: " + argumento);
        // Llamamos a la funcion
        cambiarValor(argumento);
        System.out.println("Despues llamar funcion: " + argumento);
    }
}