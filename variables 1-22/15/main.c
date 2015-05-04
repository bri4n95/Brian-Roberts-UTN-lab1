#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  int num2;
  int num3;
  printf("MULTIPLOS DE 2\n");
  for(z=0;z<50;z++)
  {
        num2=z*2; 
        printf("\t%d\n",num2);          
  }
  printf("\tMULTIPLOS DE 3\n");
   for(z=0;z<33;z++)
  {
        num3=z*3;
        printf("\t\t%d\n",num3);
       }   
  system("PAUSE");	
  return 0;
}
