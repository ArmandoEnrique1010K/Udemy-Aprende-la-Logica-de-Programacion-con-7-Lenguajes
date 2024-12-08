public class ProgramaPrincipal {

    public static void main(String args[]){
        // Operadores Relacionales  ( Comparacion )
        var a = 5;
        var b = 6;
        System.out.println("Valor a: " + a);
        System.out.println("Valor b: " + b);
        // Operador igualdad
        var c = a == b;
        System.out.println("a igual que b? " +  c);
        // Operador distinto
        c = a != b;
        System.out.println("a distinto que b? " + c);
        // Operador Mayor que
        c = a > b;
        System.out.println("a mayor que b? " + c);
        // Operador Mayor o igual que
        c = a >= b;
        System.out.println("a mayor o igual que b?  " + c);
        // Operador Menor que
        c = a < b;
        System.out.println("a menor que b? " + c);
        // Operador Menor o igual que
        c = a <= b;
        System.out.println("a menor o igual que b? " +  c);
    }
}
