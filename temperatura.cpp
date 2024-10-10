#include <iostream>
using namespace std;

int main(){

   float temperatura = 0.0f;

   cout << "Ingrese la temperatura: ";
   cin >> temperatura;

   if (temperatura < 10)
   {

      cout << "Hace frio" << endl;
   }
   else if (temperatura >= 10 && temperatura <= 25)
   {
      cout << "El clima es templado" << endl;
   }
   else
   {
      cout << "Hace calor";
   }

   return 0;
}