/*Creado el 15 de agosto de 2018 por Alexandra López*/
 
#include<stdio.h>

int main()

{
	int a,b,c,d,e;
	printf("Introduzca a continuacion cuatro numeros enteros \n");
	scanf("%i %i %i %i", &a, &b, &c, &d);

	e=(a+b) * c/d;
	printf("El valor de la operacion e=(a+b)*c/d es %i \n", e);
	e=((a+b) * c)/d;
	printf("El valor de la operacion e=((a+b) * c)/d es %i \n", e);
	e=(a+b)*c/d;
	printf("Elvalor de la operacion e=(a+b)*c/d es %i \n", e);
	e=a+(b*c)/d;
	printf("El valor de la operacion e=a+(b*c)/d es %i \n", e);
	return 0;

}

