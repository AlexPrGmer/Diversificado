// Serie de Fibonacci
#include <iostream>
using namespace std;

int main(void){
    // Son sumas
    // Solicitar primero el numero que se desea calcular
    // Debemos trabajar las sumas
    while (true){   
        int n_anterior = 2, n_acutual=1, n_siguiente=3;
        int n_deseado = 0;

        cout << "Escribe el numero que deseas calcular para la serie de Fibonacci: ";
        cin >> n_deseado;
        cout <<"0 + 1 = 1" << endl;
        while(n_anterior < n_deseado){
            n_siguiente = n_anterior + n_acutual;
            cout << n_anterior << "+" << n_acutual << "=" << n_siguiente << endl;
            n_acutual = n_anterior;
            n_anterior = n_siguiente;
        }
    }

}