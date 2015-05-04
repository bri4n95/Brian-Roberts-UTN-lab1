#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  char rta='s';
  
  while(rta=='s')
  {
  printf("ingrese numero= ");
  scanf("%d",&numero);
                      while(numero<0||numero>7)
                        {
                        printf("ERROR, REINGRESE NUMERO= ");
                        scanf("%d",&numero);
                        }
  switch(numero)
   { 
    case 1:
         printf("ES LUNES\n");
         break;
    case 2:
         printf("ES MARTES\n");
         break;
    case 3:
         printf("ES MIERCOLES\n");
         break;
    case 4:  
         printf("ES JUEVES\n");
         break;               
    case 5:
         printf("ES VIERNES\n");
         break;
    case 6:
         printf("ES SABADO\n");
         break;
    case 7:
         printf("ES DOMINGO\n");
         break;
         }

  printf("¿desea continuar? ingrese s o n\n");
  rta=tolower(getch());
  
  system("cls");
  }
  
   
 system("PAUSE");
  return 0;
}
