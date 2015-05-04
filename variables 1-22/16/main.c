#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1=0;
  int num2=0;
  int z=0;
  printf("INGRESE num1= ");
  scanf("%d",&num1);
  printf("INGRESE num2= ");
  scanf("%d",&num2);
  z=num1;
  num1=num2;
  num2=z;
  printf("num1= %d\n",num1);
  printf("num2= %d\n",num2);
  system("PAUSE");	
  return 0;
}
