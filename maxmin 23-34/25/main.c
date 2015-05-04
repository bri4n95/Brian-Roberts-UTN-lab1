#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 char nombre[50], aux[50];
 int mat1;
 int mat2;
 int mat3;
 int mat4;
 int mat5;
 int mat6;
 char rta='s';
 float promedio;
 char inicio=0;
 float prom;
 
 while(rta=='s')
 {
 printf("INGRESE NOMBRE Y APELLIDO= ");
 fflush(stdin);
 gets(nombre);
 printf("MATEMATICA= ");
 scanf("%d",&mat1);
 printf("ALGORITMO= ");
 scanf("%d",&mat2);
 printf("GEOGRAFIA= ");
 scanf("%d",&mat3);
 printf("FISICA= ");
 scanf("%d",&mat4);
 printf("HISTORIA= ");
 scanf("%d",&mat5);
 printf("GEOMETRIA= ");
 scanf("%d",&mat6);
 promedio=(mat1+mat2+mat3+mat4+mat5+mat6)/6;
 if(inicio==0)
 {
  prom=promedio;
  inicio=1;
 }
 if(promedio>prom)
 {
 prom=promedio;                 
 strcpy(aux, nombre);                 
 }
 printf("el alumno %s tiene un promedio de %f\n",nombre,promedio);
 printf("INGRESAR OTRO ALUMNO? s o n = ");
 fflush(stdin);
 rta=tolower(getch());
 system("cls");
}
printf("el alumno con el promedio mas alto es %s con %f\n",aux,prom);

  system("PAUSE");	
  return 0;
}
