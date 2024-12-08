// Alcance Variables JavaScript
// Variables globales
let variableGlobal = 5
var a = 10

// Accedemos a las variables globales 
variableGlobal = 10
console.log(variableGlobal)

// Definimos una funcion
function miFuncion(variableLocal){
    console.log(variableLocal)
    // solo se paso una copia
    variableLocal = 20
    console.log(variableLocal)
    // Accedemos a la variable global
    //console.log(a)
    
    // Redefinimos la variable a, es local a miFuncion
    // Se oculta el acceso a la variable global
    let a = 30
    console.log(a)
}

miFuncion(a)