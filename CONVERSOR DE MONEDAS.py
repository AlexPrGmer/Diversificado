#Realizar un conversor de monedas de dolares, euros y quetzales

#Menu -> Dolares a Quetzales, Dolares a Euros, euros a quetzales,
#Euros a Quetzales, Quetzales a Dolares, Quetzales a Euros

#Funciones -> dolaresaquetzales(dolares) => return quetzales

#Imprimir -> 10 dolares equivales a X (quetzales a euros)

def dolaresaquetzales(dolar):
    Quetzales = dolar * 7.71
    return == Quetzales

def dolaresaEuros(dolar):
    Euros = dolar * 0.90
    return == Euros

def QuetzalesaDolares(Quetzales):
    Dolar = Quetzales * 0.13
    return == Dolar

def QuetzalesaEuros(Quetzales):
    Euros = Quetzales * 0.12
    return == Euros


print("---------------------------------")
print("----Conversor de monedas---------")
print("---------------------------------")


while True:
      res = input('''
        1. Dolares a Quetzales
        2. Dolares a Euros
        3. Euros a Quetzales
        4. Euros a Dolares
        5. Quetzales a Dolares
        6. Quetzales a Euros
        Seleccione una opcion: ''')

if res == "1" :
  
