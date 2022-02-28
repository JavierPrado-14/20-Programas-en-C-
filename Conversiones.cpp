#include <iostream>

using namespace std;

void conversiones(){
	cout<<"Este programa muestra variedad de converciones";
	int km,m,lib;
	float resultado, resultado2, resultado3, resultado4, resultado5, resultado6;
	cout<<"\n\nIngrese los Kilometros que desea convertir a Millas: ";
	cin>>km;
	resultado=km/1.60934;
	cout<<"La conversion a millas es: "<<resultado<<endl;
	resultado2=resultado*1.60934;
	cout<<"La conversion viceversa (Kilometros) es: "<<resultado2<<endl;
	
	cout<<"\n\nIngrese los de Metros que desea converir a Pulgadas: ";
	cin>>m;
	resultado3=m*39.3701;
	cout<<"El resultado a pulgadas es:"<<resultado3<<endl;
	resultado4=resultado3/39.3701;
	cout<<"La conversion viceversa (Metros) es: "<<resultado4<<endl;

	cout<<"\n\nIngrese las libras que desea converir a Kilos: ";
	cin>>lib;
	resultado5=lib*0.453592;
	cout<<"El resultado a kilos es:"<<resultado5<<endl;
	resultado6=resultado5/0.453592;
	cout<<"La conversion viceversa (Libras) es: "<<resultado6<<endl;

}
