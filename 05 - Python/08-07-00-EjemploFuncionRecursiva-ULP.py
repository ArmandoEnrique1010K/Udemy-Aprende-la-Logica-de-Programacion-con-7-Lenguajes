# Funciones Recursivas

def funcion_recursiva(numero):
    # Caso Base
    if numero == 1:
        print(numero)
    else:
        # Caso recursivo
        funcion_recursiva(numero - 1)
        print(numero)

# Llamamos a la funcion recursiva
funcion_recursiva(3)