#include <iostream>
#include <math.h>
using namespace std;

void hipotenusa(){
	
	cout<<"\tEste Programa Calcula la Hipotenusa de un Triangulo";
	
	int co,ca;
	float hip;
	
	cout<<"\n\nDigite el Cateto Opesto: ";
	cin>>co;
	cout<<"Digite el Cateto Adyacente: ";
	cin>>ca;
	hip=sqrt (pow(co,2)+pow(ca,2));
	cout<<"\n\nEl Valor de la Hipotenusa es: "<<hip<<endl;

	cin.get();
	
}
