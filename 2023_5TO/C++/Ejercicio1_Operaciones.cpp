//Uso de la función switch
#include <iostream>
#include <cmath>

using namespace  std;

int main(void){
    float num1 = 0, num2 = 0;
    int respuesta = 0;
    while(true){
        string menu = "\t\tMENU\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. Division\n\t5. Potencia\n\t6. Salir\n";
        cout << menu;
        cin >> respuesta;
        
    cout << "Ingrese el primer número para realizar la operación:" << endl;
    cin >> num1;
    cout << "Ingrese el segundo número para realizar la operación:"  << endl;
    cin >> num2;

        switch(respuesta){
        case 1:
            cout << "El resultado, de la suma es: " << endl;
            cout << num1 + num2 << endl;
            break;
        case 2:
            cout << "El resultado, de la resta es: " << endl;
            cout << num1 - num2 << endl;
            break;
        case 3:
            cout << "El resultado, de la multiplicación es: " << endl;
            cout << num1 * num2 << endl;
            break;
        case 4:
            cout << "El resultado, de la división es: " << endl;
            cout << num1 / num2 << endl;
            break;
        case 5:
            cout << "El resultado, de la potencia es: " << endl;
            cout << pow(num1, num2) << endl;
            break;
        case 6:
        cout << "Adios" << endl;
            break;
        default:
            cout <<"No has ingresado una opcion valida";
            break;
    
    }
    }

}