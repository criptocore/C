// Costo de una llamada telefónica. Una llamada telefónica cuesta S/ 0.5 por los tres primeros minutos o menos. Cada minuto adicional es un paso de contador y cuesta S/ 0.1. Calcula el monto de una llamada cualquiera. 
/*
    1 Declarar variables --> duracion, costo
    2 Si excede 0.1 por la (duracion - 3 min)

*/

#include <iostream>
using namespace std;

int main() {
    
    int duracion;
    float costo;
    cout<<"Ingrese la duracion en minutos de su llamada: ";
    cin>>duracion;

    if (duracion<=3){

        costo = 0.5;       
    }else{
        costo = 0.5 + 0.1 * (duracion - 3);
    }
    
    cout<<"el costo de su llamada sera de: "<<costo<<endl;
    
    return 0;
}