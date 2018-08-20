/*creado el 20 de agosto del 2018 por Alexandra*/

#include<stdio.h>

#include<math.h>

int main()
{
	float x,p,y,r;
	printf("Introduzca el valor de x para las ecuaciones \n");
	scanf("%f", &x);
	p= 13.1416;
	r= (180/p);
	printf("el valor de x es: %f \n", x);

	y=exp(-x);
	printf("el valor de x es: %f \n", y);
	y=cos(x)+2*tan(r/2);
	printf("el valor de x es: %f \n", y);
	y=log(x)+3*pow(x,2);
	printf("el valor de x es: %f \n", y);
	
	return(0);
}




























