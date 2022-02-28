#include <iostream>

using namespace std;

void decimalesahexadecimales(){
	cout<<"Este programa convertira el numero que ingresara a numero Hexadecimal";
	int digitohex[20];
	int decimal,residuo,resultado;
	int i=0;
	cout<<"\n\nIngrese el numero decimal que desea convertir a hexadecimal:"<<endl;
	cin>>decimal;
	do{
		residuo = decimal%16;
		resultado = decimal/16;
		digitohex[i] = residuo;
		decimal = resultado;
		i++;	
	}
	while (resultado>15);
	digitohex[i] = resultado;
	cout <<"El equivalente en hexadecimal es: ";
	
	for (int j = i; j >= 0; j--){
		if (digitohex[j] == 10 ){
			cout <<"A";	
		}
		else if (digitohex[j] == 11){
			cout <<"B";
		}
		else if (digitohex[j] == 12){
			cout <<"C";
		}
		else if (digitohex[j] == 13){
			cout <<"D";
		}
		else if (digitohex[j] == 14){
			cout <<"E";
		}
		else if (digitohex[j] == 15){
			cout <<"F";
		}
		else{
			cout<<digitohex[j];
		}	
	}
	cout <<endl;
	
	
}
