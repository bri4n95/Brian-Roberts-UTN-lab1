#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
int numero[10];
int i, j=0,z,suma[10];
char rta='s';

for(i=0;i<10;i++)
{
while(rta=='s')
{
printf("\ningrese numero a sumar= ");
scanf("%d",&numero[i]);
j++;
suma=suma+numero[i];

printf("desea continuar? (s o n) = ");
rta=tolower(getch());
}
}

for(i=0, z=1 ;i<=j;i++,z++)
{
printf("Elemento %d = %d\n",z,suma);
}
  system("PAUSE");	
  return 0;
}
