#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int i, aux, inicio=0, gastos[10], max;
char rta='s';

for(i=0;i<10;i++)
{
do
{
printf("\ningrese gastos de hoy (dia %d)= ",i+1);
scanf("%d",&gastos);

if(inicio==0)
{
max=gastos[i];
inicio=1;
}

if(gastos[i]>max)
{max=gastos[i];
aux=i+1;}

printf("cerrar gastos del dia? (s o n) = ");
fflush(stdin);
rta=tolower(getch());
}while(rta=='s');
}

printf("el dia de mayor gasto fue %d el dia %d",max,aux);

  system("PAUSE");	
  return 0;
}
