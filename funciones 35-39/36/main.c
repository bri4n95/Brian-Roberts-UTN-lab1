
#include <stdio.h>
#include <stdlib.h>
#define LIMITE 50

int validar_sueldo (int sueldo[]);

int main(int argc, char *argv[])
{
  int i, sueldo[LIMITE];
  char nombre[LIMITE][25], fecha[LIMITE][15];
  for (i=0;i<2;i++)
  {
      printf("INGRESAR NOMBRE= ");
      fflush(stdin);
      gets(nombre[i]);
      printf("INGRESAR FECHA INGRESO= ");
      fflush(stdin);
      gets(fecha[i]);
      printf("INGRESAR SUELDO= ");
      scanf("%d",&sueldo[i]);
      validar_sueldo(sueldo);
  }
  system("PAUSE");	
  return 0;
}

int validar_sueldo (int sueldo[])
 {
   int i;
                for (i=0;i<2;i++)
                {
                   while(sueldo[i]<1)
                   {
                   printf("ERROR REINGRESE SUELDO= ");
                   scanf("%d",&sueldo[i]);
                   
                   }
                   return sueldo[i];
                }
                                
 }
