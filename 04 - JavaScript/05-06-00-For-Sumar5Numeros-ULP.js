// Sumar los primeros 5 numeros (for)
let minimo = 0, maximo = 5, acumuladorSuma = 0
for (let numero = 1; numero <= maximo; numero++){
    // Imprimimos lo que se va a sumar
    console.log(`${acumuladorSuma} + ${numero}`)
    // Realizamos la suma parcial
    acumuladorSuma += numero
    console.log(acumuladorSuma)
}
console.log(`La suma de los primeros ${maximo} 
             numeros es: ${acumuladorSuma}`)