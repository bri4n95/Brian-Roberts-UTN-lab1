#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float peso;
  char empleado=0, empleadoGordo=0;
  char rta='s';
  
  while (rta=='s')
        {
         printf("INGRESE PESO DEL EMPLEADO= ");
         scanf("%f",&peso);
         if(peso<=80)
         {
         empleado++;            
         }
         if(peso>80)
         {
         empleadoGordo++;
         }
         printf("desea continuar? s o n \n");
         fflush(stdin);
         rta=tolower(getch());
        }
        printf("+ de 80 son %d y los de menos de 80 son %d\n",empleadoGordo,empleado);
  system("PAUSE");	
  return 0;
} 
