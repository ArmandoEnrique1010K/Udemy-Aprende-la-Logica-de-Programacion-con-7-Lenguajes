# Convertir de numero a cadena
a, b = 10, 20

# Si son numeros se suman
print(a + b)

# Convetir a cadena
concatenacion = str(a) + str(b)
print(concatenacion)

concatenacion = a.__str__() + b.__str__()
print(concatenacion)

concatenacion = a.__repr__() + b.__repr__()
print(concatenacion)
