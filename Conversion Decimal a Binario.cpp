#include <iostream>

using namespace std;

void decimalesabinarios(){
	cout <<"Este programa convierte numeros decimales a numeros binarios";
	int decimal;
	short binario[8];
	cout<<"\n\nIngrese el numero decimal que desea convertir en binario: ";
	cin>>decimal;
	for (int i = 0; i<8; i++){
		binario[i] = decimal%2;
		decimal /=2;
	}
	cout<<"\nEl numero en binario es: "<<endl;
	for (int i = 7; i>=0; i--){
		cout<<binario[i];
	}
	cout<<endl;
	
	
	
}
