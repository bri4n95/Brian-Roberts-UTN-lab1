#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int num1,num2,operacion;  
  int suma,resta,multiplicacion,division;
  char rta=0;
  
  while(rta!='9')
  {
      printf(" ELIJA LA OPCION DESEADA\n 1-SUMA\n 2-RESTA\n 3-MULTIPLICACION\n 4-DIVISION\n\n\n 9-SALIR\n QUE DESEA HACER?= "); 
  fflush(stdin);
  rta=getch();
  
  
  switch(rta)
  {
  case '1':
        printf("\nINGRESE NUM 1= ");
  scanf("%d",&num1);
  printf("INGRESE NUM 2= ");
  scanf("%d",&num2);
       suma=num1+num2;
       printf("LA SUMA DA %d\n",suma);
        fflush(stdin);
        rta=getch();
       break;
  case '2':
        printf("\nINGRESE NUM 1= ");
  scanf("%d",&num1);
  printf("INGRESE NUM 2= ");
  scanf("%d",&num2);
       resta=num1-num2;
       printf("LA RESTA DA %d\n",resta);
        fflush(stdin);
  rta=getch();
       break;
  case '3':
        printf("\nINGRESE NUM 1= ");
  scanf("%d",&num1);
  printf("INGRESE NUM 2= ");
  scanf("%d",&num2);
       multiplicacion=num1*num2;
       printf("LA MULTIPLICACION DA %d\n",multiplicacion);
        fflush(stdin);
  rta=getch();
       break;
  case '4':    
        printf("\nINGRESE NUM 1= ");
  scanf("%d",&num1);
  printf("INGRESE NUM 2= ");
  scanf("%d",&num2);       
  while(num2==0)
         {printf("ERROR NO SE DIVIDE POR 0! REINGRESE= ");
         scanf("%d",&num2);}
       division=num1/num2;
       printf("LA DIVISION DA %d\n",division);
        fflush(stdin);
  rta=getch();
       break;
  
  
  
  }
  
  
  system("cls");
  }
  
  system("PAUSE");	
  return 0;
}
