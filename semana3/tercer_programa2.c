/*creado el 20 de agosto del 2018 por Alexandra*/

#include<stdio.h>

#include<math.h>

int main()
{
	double x,y,z,a,b,c;
	printf("Introduzca coordenadas cartesianas para convertirlas a esfericas \n");
	scanf("%lf %lf %lf", &x, &y, &z);
	
	a=(sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	printf("el valor de a=sqrt(pow(x,2)+pow(y,2)+pow(z,2) es: %lf \n", a);
	b=acos(z/y);
	printf("el valor de b=acos(z/y) es: %lf \n", b);
	c=atan(y/x);
	printf("el valor de c=atan(y/x) es: %lf \n", c);
	
	return(0);

}
