#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int validaleg(int,int);

int main(int argc, char *argv[])
{
  char nombre[SIZE][51], hora[SIZE][6];
  int legajo[SIZE];
  int i;
  char rta='s';
  
  
 
   for(i=0;i<SIZE;i++)
  {
      while(rta=='s')
      {
                       
      printf("Nombre= ");
      fflush(stdin);
      gets(nombre[i]);
      printf("Legajo= ");
      scanf("%d",&legajo[i]);
         validaleg(i,legajo[]);
      
      printf("Hora= ");
      fflush(stdin);
      gets(hora[i]);
       
 
      printf("Desea continuar? = ");
     fflush(stdin);
     rta=tolower(getch()); 
     system("cls");
      }
    
 } 
 
 
 
  system("PAUSE");	
  return 0;
}

int validaleg(int i,int legajo[])

{
while(legajo[i]<1)
          {
            printf("ERROR REINGRESE LEGAJO= ");
            scanf("%d",&legajo[i]);             
          }  
}
