def suma(numero1, numero2):
    resultado = numero1 + numero2
    return resultado

def resta(numero1, numero2):
    resultado = numero1 - numero2
    return resultado 

def multiplicacion(numero1, numero2):
    resultado = 0
    for i in range(numero2):
        resultado += numero1
    return resultado

def division(numero1, numero2):
    resultado = 0
    if numero2 != 0:
        resultado = numero1/numero2
        return resultado
    else:
        return "Error de calculo"

print(suma(9,5))    
