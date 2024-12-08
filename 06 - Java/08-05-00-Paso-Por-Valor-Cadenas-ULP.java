public class ProgramaPrincipal {

    // Definimos la funcion 
    static void cambiarValor(String parametro) {
        parametro = "Adios";
    }

    public static void main(String[] args){
        // Creamos las variables
        var argumento = "Hola";
        System.out.println("Antes llamar funcion: " + argumento);
        // Llamamos a la funcion
        cambiarValor(argumento);
        System.out.println("Despues llamar funcion: " + argumento);
    }
}