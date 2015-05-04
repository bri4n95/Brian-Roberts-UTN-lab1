#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  char c=0;
  for(z=0;z<100;z++)
  {
   if(z%2==1)
      { 
      printf("%d\n",z);
      c++;
      }              
  }
  printf("los numeros impares son: %d \n",c);
  system("PAUSE");	
  return 0;
}
