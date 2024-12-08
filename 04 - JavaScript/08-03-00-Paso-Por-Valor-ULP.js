// Funciones en JavaScript
// En JavaScript los valores simples se pasan por valor 
function cambiarValor(parametro){
    parametro = 20
}

// Llamamos a la funcion
let argumento = 10
console.log(`Antes de llamar funcion: ${argumento}`)
cambiarValor(argumento)
console.log(`Despues de llamar funcion: ${argumento}`)
