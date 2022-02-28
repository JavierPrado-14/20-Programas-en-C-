#include <iostream> 
using namespace std; 

void sueldo() 
{
        int x, bono = 0, sueldo = 0;
 cout<<"Ingrese las horas trabajadas: ";
 cin>> x;
 

 if (x < 40)
 { 
  sueldo = x * 20;
  cout<<"Su sueldo esta semana es de : "<<sueldo;
 }
 else
 {
  bono = x - 40;
  sueldo = (x - bono) * 20;
  cout<<"Su sueldo esta semana es de : "<<sueldo + (bono * 25);
 }
 
}
