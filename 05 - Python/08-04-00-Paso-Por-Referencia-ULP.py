# Ejercicio Paso por Referencia
# En Python los objetos se pasan por referencia
# Definir la funcion
def cambio_valor(parametro):
    parametro[0] = 20

# Paso por referencia
arg_a = [10]
print(f'Antes llamar funcion: {arg_a}')
cambio_valor(arg_a)
print(f'Despues llamar funcion: {arg_a}')