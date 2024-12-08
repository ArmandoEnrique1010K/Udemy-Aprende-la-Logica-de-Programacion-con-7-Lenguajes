# Alcance de Variables en Python
# Variables globales
variableGlobal = 5
a = 10

# Acceder a las variables
variableGlobal = 10
print(variableGlobal)

# definimos una funcion
def mi_funcion(variable_local):
    print(variable_local)
    # Cualquier cambio posterior no afecta el valor de la variable externa
    variable_local = 20
    # Accedemos a la variable global
    global a
    a = 30
    print(a)

mi_funcion(variableGlobal)

print(f'Variable global: {variableGlobal}')
print(f'Variable global a: {a}')
