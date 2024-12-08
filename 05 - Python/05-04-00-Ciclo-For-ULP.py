# Ciclo for en Python
# No se usa como en C
# Funciona mas como for each
# para recorrer listas, cadenas, etc
for letra in 'Hola Mundo':
    print(letra, end=' ')

# Pero podemos hacer las mismas cosas usando las funciones de python
# Ejemplo, Imprimir del 1 al 5 (el valor final no se incluye)
numeros = range(1, 6)
print()
for numero in numeros:
    print(numero, end=' ')
