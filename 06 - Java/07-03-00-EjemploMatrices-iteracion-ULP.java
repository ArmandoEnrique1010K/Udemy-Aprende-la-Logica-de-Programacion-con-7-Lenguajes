public class ProgramaPrincipal {

    public static void main(String[] args){
        // Definimos la matriz
        int[][] matriz = {
                {100, 200, 300}, // Primer renglon
                {400, 500, 600} // Segundo renglon
        };
        // Iteramos la matriz
        System.out.println("-----Iteramos la Matriz ------");
        for(int ren = 0; ren < matriz.length; ren++ ){
            for(int col=0; col < matriz[ren].length; col++ ){
                System.out.print("Matriz[" + ren + "][" + col + "]=" + matriz[ren][col] + " ");
            }
            System.out.println();
        }
    }
}