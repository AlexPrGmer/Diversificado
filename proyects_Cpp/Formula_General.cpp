#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(void){
    float x1=0, x2=0;
    int a=0, b=0, c=0;
    
    cout << "Ingrese valor de a: ";
    cin >> a;
    cout << "Ingrese valor de b: ";
    cin >> b;
    cout << "Ingrese valor de c: ";
    cin >> c;

        x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);
        x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);

        cout << "El resultado de x en los dos casos es de:" << endl;
        cout << "X1: " << x1 << endl;
        cout << "X2: " << x2;
}