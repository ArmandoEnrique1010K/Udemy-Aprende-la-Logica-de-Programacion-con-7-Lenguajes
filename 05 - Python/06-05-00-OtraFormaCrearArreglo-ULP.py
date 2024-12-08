# Arreglos en Python

# Multiplicar una cadena
cadena = 'adios' * 3
print(cadena)

# Solicitamos el tamanio del arreglo
no_elementos = int(input('No. Elementos del Arreglo: '))

# Creacion del arreglo
arreglo = [0] * no_elementos

# Iteramos para solicitar los valores del arreglo
for indice in range(no_elementos):
    valor = int(input(f'Arreglo[{indice}] = '))
    arreglo[indice] = valor

# Iteramos de otra forma la lista
print('Imprimimos de otra forma la lista')
for indice in range(len(arreglo)):
    print(f'Arreglo[{indice}] = {arreglo[indice]}')