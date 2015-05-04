#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int pies;
  float decim;
  float pulg;
  
  printf("INGRESE NUMERO DECIMAL= ");
  scanf("%f",&decim);
  pulg=decim/2.54;
  pies=pulg/12;
  printf("las pulgadas son %.1f y sus pies son %d\n",pulg,pies);
  
  
  system("PAUSE");	
  return 0;
}
