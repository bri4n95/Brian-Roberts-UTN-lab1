#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
char z=0;
float tempMax; 
float tempMin;
float temperatura;
float max,min;
char fecha[15], auxmin[15], auxmax[15];

char inicio=0;

for(z=0;z<5;z++)
{
 printf("INGRESE FECHA= ");
 fflush(stdin); 
 gets(fecha);
 
  printf("INGRESE TEMPERATURA MAX= ");
   fflush(stdin); 
  scanf("%f",&tempMax);
  printf("INGRESE TEMPERATURA MIN= ");
   fflush(stdin); 
  scanf("%f",&tempMin);
  
  if(inicio==0)
  {
   max=tempMax;
   min=tempMin;
   inicio=1;        
  }
  
  if(tempMax>max)
  {
    strcpy(auxmax,fecha);
    max=tempMax;               
  }
  if(tempMin<min)
  {
    strcpy(auxmin,fecha);
    min=tempMin;               
  }
              
}

printf("el dia %s hubo %.2f y el dia %s hubo %.2f",auxmax,max,auxmin,min);

  system("PAUSE");	
  return 0;
}
