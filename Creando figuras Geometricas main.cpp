#include "miniwin.h"
#include <iostream>

using namespace miniwin;
int main (){
	
	vredimensiona(600,400);
	color (VERDE);
	rectangulo(10, 10, 50, 50);
	color (ROJO);
	circulo(150, 120, 40);
	refresca();
	return 0;
	
}
