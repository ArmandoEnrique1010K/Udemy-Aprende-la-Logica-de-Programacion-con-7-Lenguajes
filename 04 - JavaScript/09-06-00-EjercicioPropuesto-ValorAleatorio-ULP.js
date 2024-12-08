// Funciones Incorporadas en JavaScript

// Generamos valores aleatorios 
// entre 0 y 100
console.log(Math.random()*101)

//Math.floor redondea al entero inferior mas cercano
console.log(Math.floor(Math.random()*101))

// Valor aleatorio entre 100 y 200
let valorAleatorio = Math.floor(Math.random()*101) + 100
console.log(valorAleatorio)

// Formula generica (min incluida, max NO incluido)
let min = 100, max = 201 // Rango entre 100 y 200
valorAleatorio = Math.floor(Math.random() * (max - min + 1) + min)
console.log(valorAleatorio)