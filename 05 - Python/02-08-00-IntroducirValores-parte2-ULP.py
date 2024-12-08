# Introducir valores en Python
nombre = input('Proporciona tu nombre: ')
print(f'Tu nombre es: {nombre}')

# Proporcionar un valor entero
numero_str = input('Proporciona un numero entero: ')
print(f'El numero {numero_str} es de tipo: {type(numero_str)}')
# Lo convertimos a entero
numero = int(numero_str)
print(f'El numero {numero} es de tipo: {type(numero)}')

# Obtener directamente un valor entero
entero = int(input('Proporciona un entero: '))
print(f'El numero {entero} es de tipo: {type(entero)}')
