#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num;
  printf("INGRESE UN NUMERO= ");
  scanf("%d",&num);
  if(num%2==0)
  {
     printf("SU NUMERO ES PAR\n");      
  }
   if(num%2==1)
  {
      printf("SU NUMERO ES IMPAR\n");     
  }
  system("PAUSE");	
  return 0;
}
