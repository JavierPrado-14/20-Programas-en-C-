#include <iostream>

using namespace std;

void tabla(){
	cout<<"Este programa muestra la tabla de Multiplicar del # ingresado";
	int numero;
	do {
		cout<<"\n\nIngrese un numero del 1 al 10 para ver su tabla de multiplicar: ";
		cin>>numero;
	}
	while((numero<1) || (numero>10));
	
	for (int i=1;i<=10;i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	
}
