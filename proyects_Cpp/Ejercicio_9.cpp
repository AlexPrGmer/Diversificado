#include <iostream>
#include <string>

using namespace std;

int main(){
    //Utilizando el condicional IF
    int numero_1 = 0, numero_2 = 0;
    cout << "Escribe el primer numero: ";
    cin >> numero_1;
    cout << "Escriba el segundo numero: ";
    cin >> numero_2;

    if (numero_1 > numero_2)        {
        cout<< "El numero uno es mayor que el segundo numero" << endl;
    }else if (numero_1 < numero_2){
        cout<< "El primer numero es menor que el segundo numero" << endl;
    }

 return 0;   
}