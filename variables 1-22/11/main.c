#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  char c=0;
  for(z=1 ;z<100;z++)
  {
   if(z%2==0)
      { 
      printf("%d\n",z);
      c++;
      }              
  }

  system("PAUSE");	
  return 0;
}
