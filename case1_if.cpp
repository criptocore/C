//Si dos numeros so  positivos, calcule su producto; si no lo son, calcule su suma

/*
1 Declaro variables: numero1, numero2;
2 Realizar condicion >= 0 --> positivo
3 Calcular el producto
4 De lo contrario calculamos la suma
*/

#include <iostream>
using namespace std;

int main() {
   
   int numero1, numero2;

   cout<<"Ingresa el numero 1: ";
   cin>>numero1;

   cout<<"Ingresa el numero 2: ";
   cin>>numero2;

   if ( numero1 >= 0 && numero2 >= 0)
      cout<<"El producto es: "<<numero1*numero2<<endl;
         else cout<<"la suma es: "<<numero1+numero2<<endl;

   return 0;
}