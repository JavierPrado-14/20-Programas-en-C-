#include <iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

void gotoxy(int x1, int y1){
	
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x1;
	dwPos.Y=y1;
	
	hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}

char opcion;
int x=60,y=15;

int main (){
	
	cout<<"Para mover el Punto por favor utilice las teclas: W, S, A, D";
	
	while (opcion!='z')
	
	{
		system("cls");
		gotoxy(x,y);
		cout<<".";
		opcion=getch();
		switch(opcion)
		{
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
		}
	}
	return 0;
}
