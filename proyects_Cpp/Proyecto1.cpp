/*
1. Soliciten el nombre de un estudiante
2. Soliciten cuatro notas obtenidas en el curso de matemáticas
3. Saquen el promedio de las notas y las imprimen

    RESTRICCIONES
    - Deben de utilizar para el nombre un strig
    - Para almacenar las notas deben de utlizar un array
    - Para imprimir los resultados, deben de visualizarse el nombre del alumno
    y promedio obtenido en el curso de matemáticas
    - Al terminar el flujo, deberade volver a preguntar el nombre de otro estudiante
    para calcular otro promedio
*/

#include <iostream>
#include <string>

using namespace std;

int main(void){
    while (true)
        { 
        string nombre_est = "";
        cout << "Ingrese el nombre del estudiante: " << endl;
        cin >> nombre_est;

        string bimestres [4] = {
            "Primer Bimestre",
            "Segundo Bimestre",
            "Tercer Bimestre",
            "Cuarto bimestre"
        };
        int notas_bimestres [4];

        for(int j=0; j<4; j++){
            cout << "Ingrese la nota del " << bimestres[j] << " : ";
            cin >> notas_bimestres[j];
        };

        cout << "Las notas de los bimestres son:" << endl;
        for(int j=0; j<4; j++){
            cout << bimestres[j] << " es de: " << notas_bimestres[j] << endl;
        }

        int suma_de_notas = 0;
        for(int j=0; j<4; j++){
            suma_de_notas+= notas_bimestres[j];
        }
        int promedio = suma_de_notas / 4;

        cout << "El promedio de " << nombre_est << "es de :" << promedio << endl; 
    }
}