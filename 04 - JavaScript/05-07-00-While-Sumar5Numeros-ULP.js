// Sumar los primeros 5 numeros (while)
let numero = 1, minimo = 0, maximo = 5, acumuladorSuma = 0
// Ciclo while
while (numero <= maximo){
// Imprimir lo que se va a sumar
    console.log(`${acumuladorSuma} + ${numero}`)
    // Realizamos la suma parcial
    acumuladorSuma += numero
    console.log(acumuladorSuma)
    numero++
}

// Ciclo do while
do{
// Imprimir lo que se va a sumar
    console.log(`${acumuladorSuma} + ${numero}`)
    // Realizamos la suma parcial
    acumuladorSuma += numero
    console.log(acumuladorSuma)
    numero++
}while (numero <= maximo)




// Ciclo do-while
// Reiniciamos las variables
acumuladorSuma = 0
numero = 0
do {
    // Imprimir lo que se va a sumar
    console.log(`${acumuladorSuma} + ${numero}`)
    // Realizamos la suma parcial
    acumuladorSuma += numero
    console.log(acumuladorSuma)
    numero++
} while (numero <= maximo)
console.log(`La suma de los primeros ${maximo} numeros es: ${acumuladorSuma}`)