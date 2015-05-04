#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  char z;
  int cubo;
  int cuadrado;
  
  printf("ingrese cantidad de numeros a calcular\n");
  scanf("%d",&numero);
  printf("NUMERO\t CUADRADO\t CUBO\t\n");
  for(z=1;z<numero+1;z++)
  {
                   cubo=z*z*z;
                   cuadrado=z*z;
         printf("%d\t %d\t\t %d\t\n",z,cuadrado,cubo);   
         //FORMA PROFE: printf("%d \t %d \t %d",z,z*z,z*z*z);      
  }

  system("PAUSE");	
  return 0;
}
