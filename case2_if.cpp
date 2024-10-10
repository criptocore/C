//Elabora un algoritmo que resuelva una ecuacion de primer grado

/*
ax + b = 0 --> Forma de una ecuacion de primer grado
x = -b/a --> a != 0

1 Declaro mis variables: a, b , x
2 Pido coeficiente y termino independiente
3 Evaluar que a != 0


*/

#include <iostream>
using namespace std;

int main() {

   float a, b, x;

   cout<<"Ingresa el coeficiente de X: ";
   cin>>a;

   cout<<"Ingresa el termino independiente: ";
   cin>>b;

   if(a != 0){
      
      cout<<"El valor de X es: "<< -b/a <<endl;
   }
   else{
      cout<<"No es una ecuación de primer grado";
   }

   return 0;
}