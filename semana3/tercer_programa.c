/*Creado el 20 de agosto del 2018 por Alexandra*/

#include<stdio.h>

int main ()

{
	float c, k, f;
	printf("Introduzca la temperatura en celsius \n");
	scanf("%f", &c);
	k=c+273.15;
	printf("El valor de la temperatura k es: %f \n", k);
	f=(c*1.8)+32;
	printf("El valor de la temperatura f es: %f \n", f);
	c= (f-32)*(5/9);
	printf("el valor de la temperatura c es: %f \n", c);
		
	return(0);
}
