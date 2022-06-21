#include <iostream>

using namespace std;

int main(){
    //Declaración de Variables
    string nombre;
    string apellido;
    int edad;
    string direccion;

    //Solicitud de datos
    cout << "Ingrese su nombre" << endl;
    cin >> nombre;

    cout << "Ingrese su apellido" << endl;
    cin >> apellido;

    cout << "Ingrese su edad" << endl;
    cin >> edad;

    cout <<"Ingrese su direccion" << endl;
    cin >> direccion;

    //Impresion en consola de los datos
    cout << "Su nombre es: " << nombre << endl;
    cout << "Su apellido es: " << apellido << endl;
    cout << "Su edad es: " << edad << endl;
    cout << "Su direccion es: " << direccion << endl;


    return 0;
}