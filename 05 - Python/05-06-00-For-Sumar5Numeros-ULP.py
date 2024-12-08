# Sumar los primeros 5 numeros (for)
numeros = range(1, 6)
acumulador_suma = 0
for numero in numeros:
    print(f'{acumulador_suma} + {numero}')
    acumulador_suma += numero
    print(f'Suma parcial: {acumulador_suma}')
print(f'La suma de los primeros 5 numeros es: ', acumulador_suma)