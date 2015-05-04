#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  int num;
  float acumula=0;
  for(z=0;z<5;z++)
  {
                   printf("INGRESE UN NUMERO= ");
                   scanf("%d",&num);
                   acumula=acumula+num;
  }
  acumula=acumula/2;
  printf("su media es %.2f \n",acumula);
  system("PAUSE");	
  return 0;
}
