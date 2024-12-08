public class ProgramaPrincipal {

    public static void main(String[] args){
        // Obtener el largo de una cadena
        var cadena = "Hola Mundo";
        System.out.println("Largo cadena: " + cadena.length());

        // Recorrer la cadena
        for (int i = 0; i < cadena.length(); i++){
            System.out.println(i + " - " + cadena.charAt(i));
        }
    }
}