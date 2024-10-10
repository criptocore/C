// calcular el promedio de n numeros

#include<iostream>

using namespace std;

int main(){

   int n = 0;
   double numero = 0.0, suma = 0.0, promedio = 0.0;

   cout<<"ingrese el valor de n: ";
   cin>>n;

   for(int i = 1; i <= n; i++){

      cout<<"ingrese el numero "<<i<<": ";
      cin>>numero;
      suma += numero;   


   }
   promedio = suma / n;

   cout<<"El promedio de los "<<n<<" numeros es: "<<promedio<<endl;


   return 0;
}