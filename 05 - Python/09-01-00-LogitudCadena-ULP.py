# Funciones incorporadas en Python

# Obtener el largo de una cadena
cadena = 'Hola'
print(f'Largo cadena: {len(cadena)}')

print(cadena[0])
#cadena[0] = 'A'

cadena = 'Adios'
print(cadena)

# Recorrer los elementos de una cadena
for indice, caracter in enumerate(cadena):
    print(f'{indice} - {cadena[indice]}')
    #print(f'{indice} - {caracter}')
