#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[45], aux[45];
  float altura;
  char rta='s';
  float max=0;
  int inicio=0;
       while(rta=='s')
       {
        printf("INGRESE NOMBRE Y APELLIDO= ");
        fflush(stdin);
        gets(nombre);  
        printf("INGRESE ALTURA= ");
        scanf("%f",&altura);
                      if(inicio==0)
                      {
                       max=altura;
                       inicio=1;                     
                      }
                      if(altura>max)
                      {
                      max=altura; 
                      strcpy(aux,nombre);
                         }  
        printf("INGRESAR OTRO ALUMNO? s o n= ");
        fflush(stdin);
        rta=tolower(getch());
      
                            
                      
         system("cls");              
       }
       printf("%s - %.2f\n",aux,max); 
  
  system("PAUSE");	
  return 0;
}
