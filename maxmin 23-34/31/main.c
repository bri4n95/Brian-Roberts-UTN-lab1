#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[45], aux[45], auxi[45];
  int hora, tarifa;
  char rta='s';
  int operacion, resultado;
  char contador=0;
  char inicio=0;
  int min,max;
  int acumula=0;
  int promedio;
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
  acumula=acumula+resultado;
  printf("el salario semanal es %d\n",resultado);
  contador++;
  printf("empleados calculados = %d\n",contador);
  if(inicio==0)
  {
  min=resultado;
  max=resultado;
  inicio=1;             
  }
  if(resultado>max)
  {
  max=resultado;
  strcpy(aux, nombre);                 
  }
  if (resultado<min)
  {
    min=resultado;
    strcpy(auxi, nombre);
     }
 
    printf("DESEA CONTINUAR? s o n = ");
    fflush(stdin);
    rta=tolower(getch())  ;
    system("cls");      
  }
  printf("empleado mayor sueldo es %s con %d y el de menor es %s con %d\n",aux,max,auxi,min);
  promedio=acumula/contador;
  printf("el promedio de todos es %d\n",promedio);
  system("PAUSE");	
  return 0;
}
