#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int legajo,sueldo,sexo;
  char nombre[50];
  char rta='s';
  int mujeres=0, hombres=0;
  
  while(rta=='s')
  {
  printf("\nINGRESE LEGAJO= ");     
  scanf("%d",&legajo);          
  printf("INGRESE NOMBRE= ");
  fflush(stdin);
  gets(nombre);
  printf("INGRESE SUELDO= ");
  scanf("%d",&sueldo);    
  printf("INGRESE SEXO( 1F // 2M)= ");  
  scanf("%d",&sexo);     
  
  if(sexo==1 && sueldo>500)
  {mujeres++;}
    
  if(sexo==2 && sueldo<400)
  {hombres++;}
  
  printf("DESEA CONTINUAR? (S o N) = ");  
  rta=tolower(getch());         
  }
  printf("\nmujeres q ganan mas de 500 = %d y hombres menos de 400 = %d\n",mujeres,hombres);
  
  
  system("PAUSE");	
  return 0;
}
