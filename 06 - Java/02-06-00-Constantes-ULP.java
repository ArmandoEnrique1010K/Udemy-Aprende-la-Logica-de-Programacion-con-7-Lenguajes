public class ProgramaPrincipal {

    public static void main(String args[]){
        // Definir constante
        final int MI_CONSTANTE = 10;
        System.out.println(MI_CONSTANTE);
        //MI_CONSTANTE = 20; arroja un error
        // Constante PI
        final float PI = 3.1416F;
        System.out.println(PI);
        // constante PI de la clase Math
        System.out.println("Constante Math.PI: " + Math.PI);
        // Constante segundos por minuto
        final int SEGUNDOS_POR_MINUTOS = 60;
        System.out.println("Constante Seg Por Min: " + SEGUNDOS_POR_MINUTOS);
    }
}
