// Funciones Incorporadas en JavaScript

// Redondeo y truncado
let numero = 8.5, redondeo, truncado, _floor,  _ceil
// Math.round() redondea al valor entero mas cercano (superior o inferior)
redondeo = Math.round(numero) // .5 redondea al valor superior entero
console.log(redondeo)
// Math.trunc() elimina los decimales, solo se queda con la parte entera
truncado = Math.trunc(numero)
console.log(truncado)
// Math.floor(), redondea al entero inferior mas cercano
_floor = Math.floor(numero)
console.log(_floor)
// Math.ceil(), redondea al entero superior mas cercano
_ceil = Math.ceil(numero)
console.log(_ceil)
