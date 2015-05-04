#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int posicion=0, valor[10];
  int i;
  
  for(i=0;i<11;i++)
  {
  printf("para la posicion %d el valor sera = ",posicion++);
  scanf("%d",&valor[i]);
}


  system("PAUSE");	
  return 0;
}
