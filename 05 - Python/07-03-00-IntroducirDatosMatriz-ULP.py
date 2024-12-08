# Introducir valores en una matriz
renglones = int(input('Proporciona no. renglones: '))
columnas = int(input('Proporciona no. columnas: '))
# Otra forma de crear la matriz
# Crea un arreglo de n renglones
matriz = [0] * renglones
for ren in range (renglones):
    # Por cada renglon, se asigna un arreglo de m columnas
    matriz[ren] = [0] * columnas
print(f'Matriz creada: {matriz}')

# Pedimos los datos de la matriz
for ren in range(renglones):
    for col in range(columnas):
        matriz[ren][col] = int(input(f'Valor [{ren}][{col}] = '))
print(matriz)