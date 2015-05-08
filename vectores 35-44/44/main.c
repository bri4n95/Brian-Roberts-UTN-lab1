#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int numero[20];
int i;

for(i=0;i<20;i++)
{
printf("ingrese numero= ");
scanf("%d",&numero[i]);

while(numero[i]==0)
{printf("error no puede ser 0, reingrese= ");
scanf("%d",&numero[i]);}

}


for(i=0;i<20;i++)
{printf("%d\n",numero[i]);}

for(i=0;i<20;i++)
{
if(numero[i]<0)
{printf("%d\n",numero[i]);}
}


for(i=20;i>0;i--)
{
if(numero[i]>0)
{printf("%d\n",numero[i]);
}


}
  system("PAUSE");	
  return 0;
}
