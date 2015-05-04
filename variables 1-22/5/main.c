#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num;
  printf("INGRESE UN NUMERO= ");
  scanf("%d",&num);
  if(num<0)
  {
     printf("SU NUMERO ES NEGATIVO\n");      
  }
   if(num>0)
  {
      printf("SU NUMERO ES POSITIVO\n");     
  }
  system("PAUSE");	
  return 0;
}
