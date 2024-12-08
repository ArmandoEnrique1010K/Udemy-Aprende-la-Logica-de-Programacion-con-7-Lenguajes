
public class ProgramaPrincipal {

    public static void main(String args[]) {
        /* Reglas para definir el nombre de una variable
        1. Puede contener letras, digitos, _ y $
        2. Debe comenzar con una letra
        3. Inicia con letra minuscula y sin espacios
        4. Es sensible a mayusculas/minusculas
        5. No se pueden usar palabras reservadas (int, boolean, etc)
        */
        int miVariable = 10;
        System.out.println(miVariable);
        
        int _miVariable = 20;
        System.out.println(_miVariable);
        
        int $miVariable = 30;
        System.out.println($miVariable);
        
        // Error, no se permite iniciar con numeros
        //int 1_miVariable = 30;
    }
}