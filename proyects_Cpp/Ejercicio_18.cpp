//Guardar datos en un array solicitandolos desde la consola

#include <iostream>
#include <string>

using namespace std;

int main(void){
    string nombres [10] = {
        "Pablo",
        "Raul",
        "Angel",
        "Javier C",
        "Sharon",
        "Javier G",
        "Ximena",
        "Carlos",
        "Rodrigo",
        "Erika"
    };

    int edades[10];

    for(int j=0; j<10; j++){
        cout << "Ingrese la edad de " << nombres[j] << " : ";
        cin >> edades[j];
    }

    cout << "La edad de los alumnos es la siguiente:" << endl;
    for(int j=0; j<10; j++){
        cout << "La edad de "<< nombres[j] << " es de: " << edades[j] << endl;
    }
}
