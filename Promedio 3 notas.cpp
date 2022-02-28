#include <iostream> 
using namespace std; 

void promedio()

{
        float nota1, nota2, nota3, promedio = 0;
 cout<<"Ingrese sus notas"<<endl;
 cin>> nota1 >> nota2 >> nota3;
 promedio = (nota1 + nota2 + nota3) / 3;

 if (promedio >= 100)
 { 
  cout<<"Aprobado"<<endl;
 }
 else 
 { 
  cout<<"Reprobado"<<endl;
 }

 
}
