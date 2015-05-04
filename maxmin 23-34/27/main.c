#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char z;
  char nombre[40], aux[40], aux2[40];
  int intel, cultura, belleza;
  int acumula=0, gral=0;
  char inicio=0;
  int max, min;
  for(z=0;z<5;z++)
                   {
                   printf("INGRESE NOMBRE Y APELLIDO= ");
                   fflush(stdin);
                   gets(nombre);
                   printf("PUNTOS INTELIGENCIA= ");
                   scanf("%d",&intel);
                   printf("PUNTOS CULTURA GENERAL= ");
                   scanf("%d",&cultura);
                   printf("PUNTOS BELLEZA= ");
                   scanf("%d",&belleza);
                   gral=intel+cultura+belleza;
                   acumula=acumula+intel+cultura+belleza;
                   if(inicio==0)
                   {
                      max=gral;
                      min=acumula;
                       inicio=1;       
                   }
                   if(gral>max)
                   {
                   strcpy(aux,nombre);
                   max=gral;            
                   }
                   if(acumula<min)
                   {
                   min=acumula; 
                    strcpy(aux2,nombre);              
                   }
                   system("cls");
                   }
                   printf("la concustante con mayor puntaje es %s con %d\n",aux,max);
                    printf("el total del puntaje es %d\n", acumula);
                    printf("el menor de los puntajes lo tubo %s con %d\n",aux2,min);
                     system("PAUSE");	
                     return 0;
}
