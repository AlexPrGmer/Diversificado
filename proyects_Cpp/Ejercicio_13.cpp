//Uso del ciclo For

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

    int main(void){
        string nombre = "";
        int nota = 0, suma = 0, promedio = 0;
        cout << "Escribe tu nombre: " << endl; 
        getline(cin, nombre);

        //Cuatro Bimestres
        for(int a=1; a<5; a++){
            cout << "Escriba la nota del bimestre " << a << ": ";
            cin >> nota;
            suma = suma + nota;
            //suma += nota;
        }
        promedio = suma/4;

        cout <<nombre << ", tu nota final es de: " <<promedio;
    }