 /* Realizar con ciclos for o while la operacion FACTORIAL
 5! = 5*4*3*2*1
 0! = 1 */
 #include <iostream>
#include <string>
using namespace std;

int main(void){
    
int num = 0;
int factorial = 1; 
cout << "Ingrese un numero mayor o igual a cero: ";
cin >> num;

for(int j = 1; j<=num; j++){
        factorial = factorial * j;
        }
cout << "El factorial del numero que ingreso es: " << factorial << endl;
}