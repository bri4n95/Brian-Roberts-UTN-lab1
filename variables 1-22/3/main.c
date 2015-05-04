#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  int num;
  int pos=0;
  int neg=0;
  for (z=0;z<10;z++)
  {
      printf("INGRESE NUMERO= ");
    scanf("%d",&num);
    if(num<0)
    { 
             neg++;
    } 
    if(num>0)
    { 
             pos++;
    } 
  }
  printf("los numeros negativos son %d y los positivos son %d \n",neg,pos);
  system("PAUSE");	
  return 0;
}
