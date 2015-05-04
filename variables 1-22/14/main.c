#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  int suma=0;
  for(z=3;z<100;z++)
  {
   if(z%3==0)
      { 
      printf("%d\n",z);
      suma=suma+z;
      }              
  }
  printf("la suma es %d ", suma);
  system("PAUSE");	
  return 0;
}
