// Funciones en JavaScript
// En JavaScript los objetos y los arreglos se pasan por valor
// Pero el valor que se pasa es la referencia del objeto o arreglo
function cambiarValor(parametro){
    parametro[0] = 20
}

// Llamamos a la funcion
let argumento = [10]
console.log(`Antes de llamar funcion: ${argumento}`)
cambiarValor(argumento)
console.log(`Despues de llamar funcion: ${argumento}`)
