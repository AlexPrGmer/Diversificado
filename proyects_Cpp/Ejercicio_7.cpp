#include <iostream>
using namespace std;

int main(){
    //Declaración de variables
    double radio = 0;
    double volumen = 0;
    double area = 0;

    //Solicitud de datos
    cout << "Por favor ingrese el radio de la esfera: 10";
    cin >> radio;

    //Precesamiento de datos
    area = 4 * 3.1416 * radio * radio;
    volumen = (4*(radio * radio * radio)/3)*3.1416;

    //Impresión de datos
    cout << "El area de una esfera es: " << area << endl;
    cout << "el volumen de una esfera es: " << volumen << endl;
    
    return 0;
}