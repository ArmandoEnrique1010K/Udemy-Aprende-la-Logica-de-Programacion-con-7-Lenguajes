# Funciones Incorporadas en Python
import math

# redondeo y truncado
numero = 8.5
print(f'Valor original: {numero}')
# round() - redondea al entero par mas cercano si termina en .5
# se llama Banker's Rounding (o round-to-even) (redondeo-a-un-par)
redondeo = round(numero)
print(f'Redondeo: {redondeo}')
# Truncado, elimina los decimales
truncado = math.trunc(numero)
print(f'Truncado: {truncado}')
# math.floor() redondea al entero inferior mas cercano
floor = math.floor(numero)
print(f'Floor: {floor}')
# math.ceil() rendodea al entero superior mas cercano
ceil = math.ceil(numero)
print(f'Ceil: {ceil}')