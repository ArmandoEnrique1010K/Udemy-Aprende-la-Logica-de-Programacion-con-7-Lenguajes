// Funciones Recursivas

function funcionRecursiva(numero){
    // Caso Base
    if (numero == 1)
        console.log(numero)
    else{
        // Caso recursivo
        funcionRecursiva(numero - 1)
        console.log(numero)
    }
}

// Llamamos a la funcion recursiva
funcionRecursiva(3)