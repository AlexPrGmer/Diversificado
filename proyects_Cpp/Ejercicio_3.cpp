#include <iostream>

using namespace std;

int main(){

    int arr[] = {11, 35, 62, 555, 989};
    int suma = 0;

    for(int x=0;x<5; x++){
        suma += arr[x];

    }
    cout <<"La suma del array es de:" <<suma << endl;

    return 0;
}