#include <iostream>
#include <locale.h>
using namespace std;

void numerosaletras(){
	cout<<"Este programa nos muestra como se convierte un numero a letras";
	int numero, unidad, decena, centena, milecimacentena;
	cout<<"\n\nIngrese un numero de 1 a 9999: ";
	cin>>numero;
	if (numero>=0 && numero<=9999){
		unidad=numero%10;
		decena=numero%10;
		centena=numero%10;
		milecimacentena=numero%10;
		numero=numero/10;
		numero=numero/10;
		numero=numero/10;
			}
		
		switch (milecimacentena){
			case 0: cout<<""; break;
			case 1: cout<<"mil"; break;
			case 2: cout<<"dos mil"; break;
			case 3: cout<<"tres mil"; break;
			case 4: cout<<"cuatro mil"; break;
			case 5: cout<<"cinco mil"; break;
			case 6: cout<<"seis mil"; break;
			case 7: cout<<"siete mil"; break;
			case 8: cout<<"ocho mil"; break;
			case 9: cout<<"nueve mil"; break;
		}
		
		switch (centena){
			case 0: cout<<""; break;
			case 1: if (decena==0 && unidad==0) {
				cout<<"cien";
				}
				else {
					cout<<"ciento";
				}
				break;
			case 2: cout<<"Doscientos"; break;
			case 3: cout<<"Trescientos"; break;
			case 4: cout<<"Cuatrocientos"; break;
			case 5: cout<<"Quinientos"; break;
			case 6: cout<<"Seiscientos"; break;
			case 7: cout<<"Sietecientos"; break;
			case 8: cout<<"Ochocientos"; break;
			case 9: cout<<"Novecientos"; break;
			}
			
		switch (decena){
			case 1: switch (unidad){
				case 0: cout<<"Diez"; break;
				case 1: cout<<"Once"; break;
				case 2: cout<<"Doce"; break;
				case 3: cout<<"Trece"; break;
				case 4: cout<<"Catorce"; break;
				case 5: cout<<"Quince"; break;
				case 6: cout<<"Diesciseis"; break;
				case 7: cout<<"Diescisiete"; break;
				case 8: cout<<"Diesiocho"; break;
				case 9: cout<<"Diesinueve"; break;
			}
			break;
			
			case 2: if (unidad==0){
				cout<<"Venti";
					} else {
						cout<<"Venti";
					}
				break;
			
			case 3: if (unidad==0){
				cout<<"Treinta";
					} else {
						cout<<"Treinta y";
					}
				break;
			
			case 4: if (unidad==0){
				cout<<"Cuarenta";
					} else {
						cout<<"Cuarenta y";
					}
				break;
			
			case 5: if (unidad==0){
				cout<<"Cincuenta";
					} else {
						cout<<"Cincuenta y";
					}
				break;
				
			case 6: if (unidad==0){
				cout<<"Sesenta";
					} else {
						cout<<"Sesenta y";
					}
				break;
			
			case 7: if (unidad==0){
				cout<<"Setenta";
					} else {
						cout<<"Setenta y";
					}
				break;
			
			case 8: if (unidad==0){
				cout<<"Ochenta";
					} else {
						cout<<"Ochenta y";
					}
				break;
				
			case 9: if (unidad==0){
				cout<<"Noventa";
					} else {
						cout<<"Noventa y";
					}
				break;
		
		switch (unidad){
			case 0: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Cero";	
			}
			else{
				cout<<"";
			}
			break;
			
			case 1: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Uno";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Uno";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Uno";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Uno";
			}
			else {
				cout<<"";
			}
			break;
			
			case 2: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Dos";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Dos";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Dos";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Dos";
			}
			else {
				cout<<"";
			}
			break;
			
			case 3: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Tres";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Tres";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Tres";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Tres";
			}
			else {
				cout<<"";
			}
			break;
			
			case 4: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Cuatro";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Cuatro";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Cuatro";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Cuatro";
			}
			else {
				cout<<"";
			}
			break;
			
			case 5: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Cinco";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Cinco";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Cinco";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Cinco";
			}
			else {
				cout<<"";
			}
			break;
			
			case 6: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Seis";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Seis";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Seis";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Seis";
			}
			else {
				cout<<"";
			}
			break;
			
			case 7: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Siete";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Siete";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Siete";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Siete";
			}
			else {
				cout<<"";
			}
			break;
			
			case 8: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Ocho";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Ocho";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Ocho";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Ocho";
			}
			else {
				cout<<"";
			}
			break;
			
			case 9: if (milecimacentena==0 && centena==0 && decena==0){
				cout<<"Nueve";
			}
			else if (milecimacentena==0 && centena==0 && decena>=3){
				cout<<"Nueve";
			}
			else if (milecimacentena==0 && centena>=1 && decena>=3 || decena==0){
				cout<<"Nueve";
			}
			else if (milecimacentena==1 && centena>=0 && decena>=3 || decena==0){
				cout<<"Nueve";
			}
			else {
				cout<<"";
			}
			break;
			

		}
			
		}
	
	else {
			cout<<"\n ERROR!!! Debe ingresar un numero en el rango de 0 a 9999";	
		}
	cout<<"\n";
	system ("pause");

}

