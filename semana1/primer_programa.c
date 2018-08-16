/*Creado el 13 de agosto de 2018 por Alexandra López*/
 
#include<stdio.h>

int main()
{
int edad, edad2;

char nombre[22];

printf("Hola \n");
printf("estes es el 1er programa del curso \n");
printf("Dime tu nombre\n");
scanf("%s", &nombre);
printf("Dime tu edad: \n");
scanf("%i", &edad);
edad2=edad+10;
printf("%s Tu edad en 2028 es : %i \n", nombre,edad2);
return 0;

}
