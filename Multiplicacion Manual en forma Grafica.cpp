#include <iostream>
using namespace std;

void tablagraficada()
{
    int valor1, valor2, a, b, f1,f2, fn;

    cout<<"Ingrese valor 1"<<endl;
    cin>>valor1;
    cout<<"Ingrese valor 2"<<endl;
    cin>>valor2;

    cout<<"          "<<valor1<<endl;
    cout<<"         "<<"X"<<valor2<<endl;
    cout<<"          ""----"<<endl;

    if (valor2<99)
    {
        a=valor2%100/10;
        b = valor2%10/1;

        f1 = b*valor1;
        
        cout<<"           "<<f1<<endl;
         
         f2= a*valor1;
    cout<<"          "<<f2<<endl;
    cout<<"           ""----"<<endl;

   
    
    fn = valor1 * valor2;
    cout<<"         "<<fn<<endl;



    }
    

    system("pause");
   
}
