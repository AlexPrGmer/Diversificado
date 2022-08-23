#include <iostream>
#include <string>

using namespace std;

int main(void){
    int numero = 0;
   // cout << "Ingrese la table que desee imprimir: ";
    //cin >> numero;

    //cout << "Imprimiendo la tabla del: " << numero << endl;
    
    while (numero<=10)
    {
        cout << "Ingrese la table que desee imprimir: ";
    cin >> numero;

    cout << "Imprimiendo la tabla del: " << numero << endl;
    for (int i=1;i<=10; i++){
        cout << numero << " x " << i << " = " << numero*i << endl;
    }

    }
    cout << "Vuelva a ingresar el numero" << endl;
}