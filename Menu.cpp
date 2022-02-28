#include "Operaciones.cpp"
#include "Numero par o impar.cpp"
#include "Conversiones.cpp"
#include "Palindromas.cpp"
#include "Arabigos a Romanos.cpp"
#include "Tabla de Multiplicar.cpp"
#include "Tabla de Multiplicar del 1 al 10.cpp"
#include "Multiplicacion Manual en forma Grafica.cpp"
#include "Conversion Decimal a Binario.cpp"
#include "De numero Decimales a Hexadecimales.cpp"
#include "Cajero Automatico.cpp"
#include "Calculo Hipotenusa.cpp"
#include "Promedio 3 notas.cpp"
#include "Sueldo Semanal.cpp"
#include <iostream>
using namespace std;

int main(){
		int op, op2;
	while(op==0){
		
	cout<<"\t\nMENU DE 20 PROGRAMAS"<<endl;
	cout<<"\nPara Ingresar al programa de operaciones presione: 1"<<endl;
	cout<<"Para Ingresar al programa de numeros pares o impares presion: 2"<<endl;
	cout<<"Para Ingresar al programa de conversiones presione: 3"<<endl;
	cout<<"Para Ingresar al programa de Palabras o Numeros Palindromos presione 4"<<endl;
	cout<<"Para Ingresar al programa que convierte numeros arabigos a romanos presione 5"<<endl;
	cout<<"Para Ingresar al programa de una tabla de Multiplicar presione 6"<<endl;
	cout<<"Para Ingresar al programa de depleje de todas las tablas presiones 7"<<endl;
	cout<<"Para Ingresar al programa de la tabla de multiplicar graficada presione 8"<<endl;
	cout<<"Para Ingresar al programa de conversion de numeros de decimal a binarios presione 9"<<endl;
	cout<<"Para Ingresar al programa de conversion de numeros de decimal a hexadecimales presione 10"<<endl;
	cout<<"Para Ingresar al programa del cajero automatico presione 11"<<endl;
	cout<<"Para Ingresar al programa del calculo de hipotenusa presione 12"<<endl;
	cout<<"Para Ingresar al programa del calculo de promedio presione 13"<<endl;
	cout<<"Para Ingresar al programa del calculo de sueldo presione 14"<<endl;
	
	cin>>op2;
	switch(op2){
		case 1: operaciones(); break;
		case 2: paroimpar(); break;
		case 3: conversiones(); break;
		case 4: palindroma(); break;
		case 5: arabigosaromanos(); break;
		case 6: tabla(); break;
		case 7: tablas(); break;
		case 8: tablagraficada(); break;
		case 9: decimalesabinarios(); break;
		case 10: decimalesahexadecimales(); break;
		case 11: cajero(); break;
		case 12: hipotenusa(); break;
		case 13: promedio(); break;
		case 14: sueldo(); break; 
		
	}
		}
	return 0;
}
