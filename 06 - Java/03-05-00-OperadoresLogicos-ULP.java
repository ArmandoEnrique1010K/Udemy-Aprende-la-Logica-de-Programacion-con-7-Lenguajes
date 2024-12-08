public class ProgramaPrincipal {

    public static void main(String args[]){
        // Operadores Logicos
        var a = true;
        var b = false;
        System.out.println("Valor a: " + a);
        System.out.println("Valor b: " + b);
        // Operador Logico &&  ( and o Y )
        // Regresar verdadero si ambos operandos son verdaderos
        var c = a && b;
        System.out.println("Resultado operador and: " + c);
        // Operador Logico ||  ( or o O )
        // Regresa verdadero si cualquiera de los operandos es verdadero
        c = a || b;
        System.out.println("Resultado operador or: " + c);
        // Operador Logico !  ( Not o NO )
        // Invierte el valor original ( de 1 a 0  o de 0 a 1 )
        c = !a;
        System.out.println("Resultado operador not (!a): " + c);
    }
}
