/* 
Combinación de sentencias
*/
#include <iostream>
using namespace std;

int main(void){

    int n1=0, n2=0, res=0;
    cout << "Multiplicacion con Sumas" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> n1;

    cout << "Ingrese el sugundo numero: ";
    cin >> n2;

    for(int j = 0; j<n2; j++){
        res +=n1;
    }
    
    cout << "El resultado de la operación es de: " << res << endl ;
}
