#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
int i, numero[5];
int inicio=0, max, aux ;


for (i=0;i<5;i++)
{
printf("ingrese numero= ");
scanf("%d",&numero[i]);

while(numero<0)
{
printf("error reinrese numero= ");
scanf("%d",&numero[i]);
}

if(inicio==0)
{max=numero[i];
inicio=1;}

if(numero[i]>max)
{max=numero[i];
aux=i;}

}


for (i=0;i<5;i++)
{
printf("numero %d en posicion %d\n ",numero[i],i+1);
}

printf("el maximo es %d en la posicion %d\n",max,aux);
  
  system("PAUSE");	
  return 0;
}
