#include <iostream>
using namespace std;

void cajero(){
	int SaldoInicial=1000 , saldo, retiro, opcion, agregar;
	cout<<"\tCajero Automatico";
	cout<<"\n\nUsuario: Elija una opcion";
	cout<<"\n\n1) Depositar a cuenta ";
	cout<<"\n2) Retirar Dinero";
	cout<<"\n3) Ver Saldo De Cuenta";
	cout<<"\n4) Salir";
	cout<<"\nOpcion:";
	cin>>opcion;
	
	if (opcion==1){
		cout<<"Ingrese la cantidad a depositar: ";
		cin>>agregar;
		saldo = SaldoInicial+agregar;
		cout<<"Cantidad Disponible en cuenta: "<<saldo<<endl;
	}
	else if (opcion==2){
		cout<<"Ingrese la cantidad que desea retirar ";
		cin>>retiro;
		if (retiro>1000){
			cout<<"\nLa Cantidad que desea retirar es mayor al saldo de su cuenta, por favor digite de nuevo la cantidad a retirar: ";
			cin>>retiro;
		}
		saldo = SaldoInicial-retiro;
		cout<<"\nCantidad Disponible en cuenta: "<<saldo<<endl;
	}
	else if (opcion==3){
		cout<<"La Cantidad dispoible en cuenta es: "<<SaldoInicial<<endl;
	}
	else if (opcion==4){
		cout<<"Gracias por su visita";	
	}
	else{
		cout<<"La Opcion Marcada es Incorrecta";
	}
	cin.get();
	
	
}
