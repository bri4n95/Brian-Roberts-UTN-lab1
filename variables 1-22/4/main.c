#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int altura;
  int base;
  int opera;
  
  printf("INGRESE ALTURA= ");
  scanf("%d",&altura);
  printf("INGRESE BASE= ");
  scanf("%d",&base);
  opera=base*altura;
  printf("la superficie del triangulo es: %d \n",opera);
  
  system("PAUSE");	
  return 0;
}
