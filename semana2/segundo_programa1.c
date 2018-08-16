/*Creado el 15 de agosto de 2018 por Alexandra López*/
 
#include<stdio.h>

int main()

{
	float a,b,c,d,e;
	printf("Introduzca a continuacion cuatro numeros reales \n");
	scanf("%f %f %f %f", &a, &b, &c, &d);

	e=(a+b) * c/d;
	printf("El valor de la operacion e=(a+b)*c/d es %f \n", e);
	e=((a+b) * c)/d;
	printf("El valor de la operacion e=((a+b) * c)/d es %f \n", e);
	e=(a+b)*c/d;
	printf("Elvalor de la operacion e=(a+b)*c/d es %f \n", e);
	e=a+(b*c)/d;
	printf("El valor de la operacion e=a+(b*c)/d es %f \n", e);
	return 0;

}
