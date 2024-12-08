# Ejemplo Valor Dentro de Rango
# Definimos variables
minimo, maximo = 0, 5

# Solicitamos el valor al usuario
dato = int(input('Proporciona un valor entre 0 y 5: '))

# Revisamos si esta dentro de rango
dentro_rango = dato >= minimo and dato <= maximo
print(f'Valor dentro rango: {dentro_rango}')

# Simplificacion del operador and
dentro_rango =  minimo <= dato <= maximo
print(f'Valor dentro rango: {dentro_rango}')