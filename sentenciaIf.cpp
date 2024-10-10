#include <iostream>
using namespace std;

int main()
{
   int edad = 0;

   cout<<"Ingrese su edad: ";
   cin>>edad;

   if (edad >= 18)
   {
      cout<<"Eres mayor de edad"<<endl;
   }else{
      cout<<"No eres mayor de edad"<<endl;

   }
   
   return 0;
}