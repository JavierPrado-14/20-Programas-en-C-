#include <iostream>
#include <string.h>
using namespace std;

void palindroma(){
	
	cout<<"\nEste Programa nos muestra si una palabra o numero es Palindrome";
	string palabraonumero;
	string palindroma;
	int i=0;
	cout<<"\n\nIngrese Palabra o numero que desea verificar: ";
	cin>>palabraonumero;
	cout<<"\n";
	for(i = palabraonumero.size() - 1; i>=0 ; i--){
		cout<<palabraonumero[i]<<endl;
		palindroma += palabraonumero[i];
	}
	cout<<palindroma;
	if (palabraonumero==palindroma){
		cout<<"\n\nLo digitado " <<palabraonumero << " SI es Palindroma";
	}
	else {
		cout<<"\n\nLo digitado " <<palabraonumero << " NO es Palindroma";
	}
	
}
