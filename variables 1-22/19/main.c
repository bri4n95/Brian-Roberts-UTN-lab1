#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int vendedor;
  int importe; 
  char rta='1'; 
  float porcentaje=0;
  int emple1=0, emple2=0, emple3=0;
  while(rta=='1')
  {  
  printf("\nNUMERO DE VENDEDOR= ");
  fflush(stdin);
  scanf("%d",&vendedor);
  
  while(vendedor>3 || vendedor<1)
  {printf("\nERROR, REINGRESE NUMERO DE VENDEDOR= ");
  fflush(stdin);
  scanf("%d",&vendedor);}
  
  printf("IMPORTE= ");
  scanf("%d",&importe);
  
 
  porcentaje=(importe*5)/100;
  
  if (vendedor==1)
  {
  emple1=emple1+porcentaje;
  }
   if (vendedor==2)
  {
  emple2=emple2+porcentaje;
  }
   if (vendedor==3)
  {
  emple3=emple3+porcentaje;
  }
  printf("INGRESE 0 PARA TERMINAR o 1 PARA SEGUIR= ");
  fflush(stdin);
rta=tolower(getch());
  
}

printf("\nempleado 1= %d\nempleado 2= %d\nempleado3= %d\n",emple1,emple2,emple3);
  system("PAUSE");	
  return 0;
}
