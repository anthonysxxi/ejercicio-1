#programa electoral

#ingrese nombre y edad
nombre=input('ingrese su nombre: ')
edad=int(input('ingrese su edad: '))
#cotejar si puede votar
if edad>=18:
    print(nombre,'puede votar en el 2020')
else:
    print(nombre,'puede votar en el 2024')
#despedida del programa
print('vote sabiamente')
