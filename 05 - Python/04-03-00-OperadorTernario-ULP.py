# Sentencia if-else en Python
mi_numero = int(input('Proporciona un numero: '))
# Revisamos si el numero es mayor que cero
if mi_numero > 0:
    print(f'Valor positivo: {mi_numero}')
else:
    print(f'Valor cero o negativo: {mi_numero}')

# Operador ternario
print()
print('Positivo') if mi_numero > 0 else print('Cero o Negativo')

# Sentencia if vacia
if mi_numero > 0:
    pass
