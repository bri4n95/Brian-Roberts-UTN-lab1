#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float agua=0;
 float max=0;
  float min=0;
  char inicio=0;
  char z=0;
  float acumula=0;
  float prom=0;

  
  for(z=0;z<30;z++)
  {
 
  printf("INGRESE AGUA CAIDA  dia %d= ",z+1);
  scanf("%f",&agua);
  acumula=acumula+agua;
  if(inicio==0)
  {
        min=agua;
        max=agua;
        inicio=1;     
  } 
  if(agua>max)
  {
    max=agua; 
          
  } 
   if(agua<min)
  {
    min=agua;
             
  }
                
}
prom=acumula/30;
printf("el dia de mas lluvia hubo %.2f, el de menor hubo %.2f, y el promedio es %.2f",max,min,prom);  
  system("PAUSE");	
  return 0;
}
