# Sumar los primeros 5 numeros (while)
numero, minimo, maximo, acumulador_suma = 1, 0, 5, 0
while numero <= maximo:
    print(f'{acumulador_suma} + {numero}')
    acumulador_suma += numero
    print(f'Suma parcial: {acumulador_suma}')
    numero += 1
else:
    print(f'La suma de los primeros {maximo} numeros es: ', acumulador_suma)