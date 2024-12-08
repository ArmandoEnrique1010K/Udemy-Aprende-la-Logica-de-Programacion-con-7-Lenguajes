# Arreglos en Python
# Declarar un arreglo (list)
numeros_arreglo = [13, 14, 'Hola']
# Iterar los elementos
print('Impresion del arreglo')
for elemento in numeros_arreglo:
    print(f'Arreglo {elemento}')

# Iteramos de otra forma la lista
print('Imprimimos de otra forma la lista')
for indice, elemento in enumerate(numeros_arreglo):
    print(f'Arreglo[{indice}] = {numeros_arreglo[indice]}')