#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[45];
  int hora, tarifa;
  char rta='s';
  int operacion, resultado;
  char contador=0;
  while(rta=='s')
  {
    printf("NOMBRE Y APELLIDO= ");
    fflush(stdin);
    gets(nombre);
    printf("TARIFA HORARIA= ");
    scanf("%d",&tarifa);
    printf("HORAS TRABAJADAS= ");  
    scanf("%d",&hora);   
    operacion=hora*tarifa;
  resultado=operacion*7;
  printf("el salario semanal es %d\n",resultado);
  contador++;
  printf("empleados calculados = %d\n",contador);
    printf("DESEA CONTINUAR? s o n = ");
    fflush(stdin);
    rta=tolower(getch())  ;
    system("cls");      
  }
  system("PAUSE");	
  return 0;
}
