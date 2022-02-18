#Decoracion: Nombre del Algoritmo
from cmath import pi
from modulefinder import LOAD_CONST
from operator import truediv
print("-------------------------------------------")
print("Calcular areas y perimetros")
print("-------------------------------------------")
while True:
   res = input('''
 1. Rectangulo
 2. Cuadrado
 3. Circulo
 4. Salir
 Seleccione una opcion: ''')
   if res == '1':
      #Entrada
      lado = float(input('ingrese base y altura: '))
      base = float( input('base:'))
      Alto = float( input('alto:'))
      #Proceso
      Area = base * Alto 
      Perimetro = 2 * base + 2 * Alto 
      #Salida
      print("-----------------------------------------")
      print("area:",Area)
      print("perimetro:",Perimetro)

   if res == '2':
      #Entrada
      lado = float(input('ingrese lado del cuadrado: '))
      #Proceso
      Area = lado * lado
      Perimetro = lado*4 
      #Salida
      print("-----------------------------------------")
      print("Area:",Area)
      print("Perimetro:",Perimetro)

   if res == '3':
      #Entrada
      Radio = float(input('ingrese el radio del circulo: '))
      #Proceso
      Area = pi*(Radio**2)
      Perimetro = 2*pi*Radio 
      #Salida
      print("------------------------------------------")
      print("Area:",Area)
      print("Perimetro:",Perimetro)

   elif res == '4':
      print("Adiocito")
      break

   else:
      print('por favor seleccione una opcion correcta')
