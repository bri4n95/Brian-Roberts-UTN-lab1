#include <stdio.h>
#include <stdlib.h>
#define LIMITE 5

int validar(int num[]);

int main(int argc, char *argv[])
{
  int numero[LIMITE],i;
  
  for (i=0;i<LIMITE;i++)
  {
      printf("INGRESE NUMERO %d= ",i+1);
      scanf("%d",&numero[i]);
      //printf("%d\n",numero[i]);
      if(validar(numero)==1)
      {printf("ERROR REINGRESE = ");
       scanf("%d",&numero[i]);}
  }

  system("PAUSE");	
  return 0;
}

int validar(int num[])
 {
              int i;
                for (i=0;i<LIMITE;i++)
                {
                   while(num[i]<-100 || num[i]>100)
                   {return 1;
                   }
                  
                }
                return 0;
 }
