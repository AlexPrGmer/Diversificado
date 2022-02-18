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
       lado = float(input('ingrese el lado del rectangulo: '))
       #Proceso
       area = lado*lado 
       perimetro = 4*lado 
       #Salida
       print(-------------------------------------------)
       
