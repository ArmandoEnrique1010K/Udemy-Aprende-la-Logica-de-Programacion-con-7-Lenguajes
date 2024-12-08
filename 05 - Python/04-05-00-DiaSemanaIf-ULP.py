# Algoritmo Dia Semana
dia_semana = int(input('Proporciona dia de la semana (1-7): '))
# Revisamos que dia de la semana se proporciono
if dia_semana == 1:
    print('Lunes')
elif dia_semana == 2:
    print('Martes')
elif dia_semana == 3:
    print('Miercoles')
elif dia_semana == 4:
    print('Jueves')
elif dia_semana == 5:
    print('Viernes')
elif dia_semana == 6:
    print('Sabado')
elif dia_semana == 7:
    print('Domingo')
else:
    print(f'Dia Erroneo: {dia_semana}')


