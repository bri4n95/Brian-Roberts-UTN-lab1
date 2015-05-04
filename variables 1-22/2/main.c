#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  int opera;
  printf("INGRESE UN NUMERO= ");
  scanf("%d",&numero);
  while(numero<=0)
  {
     printf("ERROR, NUMERO NEGATIVO!REINGRESE: ");
     scanf("%d",&numero);             
  }
  opera=numero*numero;
  printf("el resultado del cuadrado es: %d \n",opera);
  system("PAUSE");	
  return 0;
}
