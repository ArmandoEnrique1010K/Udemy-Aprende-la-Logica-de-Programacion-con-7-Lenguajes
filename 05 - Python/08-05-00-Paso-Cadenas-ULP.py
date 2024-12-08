# Ejercicio Pasar una Cadena
# En Python las cadenas son inmutables
# Definir la funcion
def cambio_valor(parametro):
    parametro = 'Adios'

# Pasamos una cadena
arg_a = 'Hola'
#arg_a[0] = 'A' # Las cadenas son inmutables
print(f'Antes llamar funcion: {arg_a}')
cambio_valor(arg_a)
print(f'Despues llamar funcion: {arg_a}')