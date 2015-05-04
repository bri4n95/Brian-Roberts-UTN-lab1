#include <stdio.h>
#include <stdlib.h>
// MAIL= davilamr.80@gmail.com
int main(int argc, char *argv[])
{
  float hora;
  char nombre[54];//[25] para indicar que son como maximo 25 caracteres
  char antiguedad;
  int cantHora;
  int operacion;
  int resta;
  
  printf("INGRESE VALOR HORA\n");
  fflush(stdin);
  scanf("%f",&hora);
  
  
  printf("INGRESE NOMBRE\n");
   fflush(stdin);
  gets(nombre);
  
  
  printf("INGRESE ANTIGUEDAD\n");
  fflush(stdin);
  scanf("%d",&antiguedad);
  
  
  printf("INGRESE CANT HORAS LABURADAS\n");
  fflush(stdin);
  scanf("%d",&cantHora);
  
  
  operacion=(cantHora*hora)+(antiguedad*30);
  resta=operacion-operacion*0.13;
  printf("%s",nombre);
  printf("el empleado %s tiene que cobrar %d pesos\n",nombre,resta);
  system("PAUSE");	
  return 0;
}
