#include <iostream>

using namespace std;

int main(){
    //Usiario: Alumnos661 -> Char [20]
    // Contraseña: p4ssw0rd -> Char [20]
    char usuario[20] = "Alumno661";
    char contraseña[20] = "passw0rd";

    char usuario_ingresado[20];
    char password_ingresado[20];

    cout << "**INGRESAR**"  << endl;
    cout << "Usuario: ";
    cin >> usuario_ingresado;
    cout << "contraseña: ";
    cin >> password_ingresado;

    if (usuario_ingresado == usuario){
        if (password_ingresado == contraseña){
            cout << "Binvenido";

        }
    }else{
            cout << "";
        //Instrucciones
    }

    // Si el usario y la contraseña son iguales

    // Primero comparo el usario, si son iguales, comparo la contraseña
    // Si el usario es incorrecto, entonces, no se puede ingresar
    // Si el usario es correcto pero si la contraseña es incorrecta, no se puede ingresar


    return 0;
}
