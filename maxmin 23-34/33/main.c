#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char nombre[50],aux[50];
	char rta='s';
	int legajo,auxleg,inicio=0,max;
	float promedio=0;
	char aprobados=0,diciembre=0,marzo=0;
		
		


	while(rta=='s')
	{
	printf("n de legajo= ");
	scanf("%d",&legajo);
	printf("nombre= ");
	fflush(stdin);
	scanf("%s",nombre);
	printf("promedio= ");
	scanf("%f",&promedio);

	if(promedio>=7)
	{aprobados++;}
	if(promedio<7&&promedio>=4)
	{diciembre++;}
	if(promedio<4)	
	{marzo++;}
	
	if(inicio==0)
	{max=promedio;
	inicio=1;}
	if(promedio>max)
	{max=promedio;
	strcpy(aux,nombre);
	auxleg=legajo;
	}

	printf("desea continuar? s o n\n");
	fflush(stdin);
	rta=tolower(getch());

 system("cls");
	}

printf("aprobados= %d\n diciembre= %d\n marzo= %d\n",aprobados,diciembre,marzo);
printf("el alumno mejor promedio es = %s leg %d\n",aux,auxleg);
  system("PAUSE");	
  return 0;
}
