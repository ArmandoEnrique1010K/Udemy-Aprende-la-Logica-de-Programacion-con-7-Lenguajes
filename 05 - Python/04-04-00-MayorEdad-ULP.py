# Algoritmo Mayor Edad
EDAD_ADULTO = 18
edad = int(input('Proporciona tu edad: '))
# Revisamos si el numero de edad
if edad >= EDAD_ADULTO:
    print(f'Eres mayor de edad: {edad}')
else:
    print(f'Eres menor de edad: {edad}')