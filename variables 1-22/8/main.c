#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char letraIngresada;
  char z;
 /* int contA=0;
  int contE=0;
  int contI=0;
  int contO=0;
  int contU=0;
 */ // MANERA QUE YO REALIZE
  char contA=0, contE=0, contI=0, contO=0, contU=0; 
  for(z=0;z<20;z++)
  {
                    printf("ingresar letra...");
        scanf("%c",&letraIngresada);
        fflush(stdin);//PARA LIMPIAR EL ENTER DEL INGRESO DE DATOS, Y TOME SOLO EL PRIMER CARACTER
        letraIngresada=tolower(letraIngresada);//PARA QUE MI LETRA INGRESADA SE PASE SIEMPRE A MINUSCULA
        switch(letraIngresada)
        {
                              case 'a':
                                   contA++;
                                   break;
                              case 'e':
                                   contE++;
                                   break;
                              case 'i':
                                   contI++;
                                      break;
                              case 'o':
                                   contO++;
                                   break;
                              case 'u':
                                   contU++;
                                   break;
         }
    system("cls"); //LIMPIA LA PANTALLA   
    printf(" A:%d\n E:%d\n I:%d\n O:%d\n U:%d\n",contA,contE,contI,contO,contU);
  }
  
  //system("PAUSE");	
  return 0;
}
