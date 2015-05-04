#include <stdio.h>
#include <stdlib.h>

void ingresoDatos ();

int numSocio, edad;
  char nombre[50], deporte;
  int tenis=0, rugby=0, voley=0, hockey=0, futbol=0;
  int aTenis=0, aRugby=0, aVoley=0, aHockey=0, aFutbol=0;
  
  char rta='s';
 
int main(int argc, char *argv[])
{ 
  do{   
  ingresoDatos ();
     switch(deporte)
     {
     case '1':
          tenis++;
          aTenis=aTenis+edad;
          break;
     case '2':
          rugby++;
          aRugby=aRugby+edad;
          break;
     case '3':
          voley++;
          aVoley=aVoley+edad;
          break;
     case '4':
          hockey++;
          aHockey=aHockey+edad;
          break;
     case '5':
          futbol++;
          aFutbol=aFutbol+edad;
          break;
     }
     
     
     
       printf("desea ingresar otro socio (s o n)= ");
       fflush(stdin);
       rta=tolower(getch());
       system("cls");
}while(rta=='s');

  printf("%d practican tenis y %d practican rugby\n",tenis,rugby);
  printf("promedio de TENIS= %f\n RUGBY= %f\n VOLEY= %f\n HOCKEY= %f\n FUTBOL= %f\n",aTenis/tenis,aRugby/rugby,aVoley/voley,aHockey/hockey,aFutbol/futbol);
  
  
  system("PAUSE");	
  return 0;
}

void ingresoDatos ()
{

    
  printf("INGRESE NUMERO DE SOCIO= ");
  scanf("%d",&numSocio);
  printf("INGRESE NOMBRE Y APELLIDO= ");
  fflush(stdin);
  gets(nombre);
  printf("INGRESE EDAD= ");
  scanf("%d",&edad);  
 
  printf("QUE DEPORTE PRACTICA? (1 TENIS 2 RUGBY 3 VOLEY 4 HOCKEY 5 FUTBOL) = ");
  scanf("%d",&deporte);
}
