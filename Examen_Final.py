print("----------------------------------------------")
print("---Impresor de numeros pares e impares--------")
print("----------------------------------------------")


res = input(''' Eliga la opcion que desee
 1.Imprir los numeros pares
 2.Imprimir los numeros impares
 3.Salir  ''')

if res == '1':
    numero = 0 
    while numero < 101:
        if numero % 2 == 0:
            print(numero, "Es par")
        numero += 1
        

if res == "2":
    numero = 0 
    while numero < 101:
        if numero % 2 != 0:
            print (numero, "Es impar")
        numero += 1
        
