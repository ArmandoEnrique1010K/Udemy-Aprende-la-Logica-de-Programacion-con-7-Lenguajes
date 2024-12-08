// Funciones en JavaScript
// Las cadenas en JavaScript son inmutables
function cambiarValor(parametro){
    parametro = 'Adios'
}

// Llamamos a la funcion
let argumento = 'Hola'
console.log(`Antes de llamar funcion: ${argumento}`)
cambiarValor(argumento)
console.log(`Despues de llamar funcion: ${argumento}`)
