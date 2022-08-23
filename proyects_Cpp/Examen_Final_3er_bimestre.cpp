#include<iostream>
#include<string>

using namespace std;

int main(void){
       int res, num1, num2, res2;
    string menu = "\t\tMenu\n\t1. Calculadora\n\t2. Inforamacion del programador\n\t3. Salir\n";
    string menu_operaciones = "\t\tElija\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. Division\n";
    cout << menu;
    cin >> res;

    switch (res){
        case 1:
            cout << "Elija la oparcion que desee realizar" << endl;
            cout << menu_operaciones;
            cin >> res2;

            switch (res2){
            case 1:
                cout << "Ingrese el primer numero: " << endl;
                cin >> num1;
                cout << "Ingrese el segundo numero: " << endl;
                cin >> num2;
                cout << "El resultado de la suma es: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Ingrese el primer numero: " << endl;
                cin >> num1;
                cout << "Ingrese el segundo numero: " << endl;
                cin >> num2;
                cout << "El resultado de la resta es: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Ingrese el primer numero: " << endl;
                cin >> num1;
                cout << "Ingrese el segundo numero: " << endl;
                cin >> num2;
                cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;
                break;
            case 4:
                cout << "Ingrese el primer numero: " << endl;
                cin >> num1;
                cout << "Ingrese el segundo numero: " << endl;
                cin >> num2;
                cout << "El resultado de la division es: " << num1 / num2 << endl;
                break;
            default:
                cout << "No eligio una opcion valida" << endl;
                break;
        }
                
                break;
        case 2:
                cout << " Nombre del programador: Abel Alexander Estrada Choc " << endl;
                cout << "Curso: Laboratorio uno " << endl;
                cout << "Grado: Cuarto Bachillerato " << endl;
                break;

        case 3:
                cout << "Hasta Pronto :) " << endl;
                break;
        default:
            cout << "No eligio una opcion valida" << endl;
            break;
        
    }
}
