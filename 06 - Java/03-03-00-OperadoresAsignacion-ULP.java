public class ProgramaPrincipal {

    public static void main(String args[]){
        // Operadores de Asignacion
        // Operador = para asignar un valor
        var miNumero = 10;
        System.out.println("Valor miNumero: " + miNumero);
        miNumero = 20;
        System.out.println("Valor miNumero: " + miNumero);
        // Operador +=
        miNumero += 5;
        // miNumero = miNumero + 5
        System.out.println("Valor miNumero (+=5): " + miNumero);
        // Operador -=
        miNumero -= 3;
        System.out.println("Valor miNumero (-=3): " + miNumero);
        // Operador *=
        miNumero *= 2;
        System.out.println("Valor miNumero (*=2): " + miNumero);
        // Operador /=
        miNumero /= 7;
        System.out.println("Valor miNumero (/=7): " + miNumero);
        // Operador %= (modulo o residuo division)
        miNumero %= 2;
        System.out.println("Valor miNumero (%=2): " + miNumero );
    }
}
