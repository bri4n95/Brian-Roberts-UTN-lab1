#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "fecha.h"


int main(void){
	char menuz, rta='s';
	int aux,index,c,popp,lista2=10,from,to,i;
	int* pAux;
	
	ArrayList* pLista;
	ArrayList* pLista2;
		


//ARRAYS CREADOS	
	pLista = newArrayList();
	pLista2 = newArrayList();
	
//ELEMENTO LISTA 2 FORZADO
	pAux=&lista2;
	pLista2->add(pLista2,pAux);
//FECHA Y HORA
	struct date d;
	struct hora t;
	
	FILE	* fdato;
		
	if((fdato = fopen("archivo.dat","rb+")) == NULL)
		if((fdato = fopen("archivo.dat","wb+")) == NULL)
		{
			printf("\nError, no se puede abrir el archivo archivo.dat...");
			exit(1);
		}
		
	
while(menuz!=21)
	{
	do{	
	get_date(&d);
	get_time(&t);


	
	printf("TEST Lista2\n");
	
	printf("------- element 0 lista2= %d\n",pLista2->elements[0]);	
	printf("------------ size lista2= %d\n",pLista2->size);	
	
	

		fflush(stdin);
		printf("Elige una opcion:\n1.AGREGAR\n2.BORRAR ARRYAY\n3.BORRAR ELEMENTO\n4.set\n5.push*\n6.pop*\n7.INDICE DE...\n8.TAMAÑO DE ARRAY\n9.contain\n10.containAll\n11.isEmpty\n12.clone\n13.subList\n14.clear(2 array)\n15.mostrarLista1\n16.mostrarLista2\n17.GUARDAR Y SALIR\n>");
		printf( "\n\nLa fecha actual es: %02d/%02d/%d\n",d.da_day, d.da_mon,d.da_year );
	printf( "La hora actual es: %02d:%02d:%02d\n",t.ti_hour, t.ti_min,t.ti_sec );
		scanf("%d",&menuz);
		fflush(stdin);
		if((menuz<1)||(menuz>21)){
			printf("Error\n");}
		}while((menuz<1)||(menuz>21));

	switch(menuz)
	  {
	  	case 1://ADD
			  	do{
					aux=entraNumero();
					//add(pLista,aux);
					pAux=&aux;
					pLista->add(pLista,pAux);
					printf("size= %d  ressize= %d\n",pLista->size,pLista->ressize);
					printf("Quieres agregar otro numero?\n");
					rta=tolower(getch());
			  	  }while(rta=='s');
			  	break;
	  	case 2://BORRA ARRAY
				deleteArrayList(pLista);
				pLista=newArrayList();
				printf("Array borrado\n");
				break;
	  	case 3://BORRAR ELEMENTO
				index=validarIndex(pLista->size);
				pLista->removess(pLista,index);
				printf("Elemento borrado\n");
				break;
		case 4://SET - INSERTA UN NUM EN INDICE ESPECIFICADO
				aux=entraNumero();
				pAux=&aux;
				index=validarIndex(pLista->size);
				pLista->set(pLista,index,pAux);
				break;
		case 5:// PUSH - DESPLAZA ELEMENTOS E INSERTA NUMERO EN INDEX
				aux=entraNumero();
				pAux=&aux;
				index=validarIndex(pLista->size);
				pLista->push(pLista,index,pAux);
				break;
		case 6://revisar pop
				index=validarIndex(pLista->size);
				
				pLista->elements[2]=(int)pop(pLista,index);
                
				break;
		case 7://MUESTRA EL INDICE DE UN ELEMTNO DEL ARRAY
				aux=entraNumero();
				pAux=&aux;
				mostrarIndexOf(pLista->indexOf(pLista,pAux),pLista->size);
				break;
		case 8://TAMAÑO ARRAY
				printf("el tamaño del array es = %d\n",pLista->sizee(pLista));
				break;
		case 9:	//COMPARACION DE ELEMENTO CON ARRAY
				aux=entraNumero();
				pAux=&aux;
				if(pLista->contains(pLista,pAux)==1)
				{printf("EL ELEMENTO %d EXISTE EN EL ARRAY\n",aux);}	
					else
					{printf("EL ELEMENTO %d NO EXISTE\n",aux);}		
				break;
		case 10://COMPARACION DE ARRAY, CONTIENE
				if(pLista->containsAll(pLista,pLista2)==1)
				{printf("EL ARRAY 2 EXISTE EN EL ARRAY 1\n");}	
					else
					{printf("EL ARRAY 2 NO EXISTE EN ARRAY 1\n");}		
				break;
		case 11://ELEMENTOS EN ARRAY
				if(pLista->isEmpty(pLista)==0)
				{printf("EL ARRAY NO TIENE ELEMENTOS\n");
				}
				else
				{printf("EL ARRAY TIENE ELEMENTOS CARGADOS\n");
				}
				break;
		case 12://CLONA LISTA1 A LISTA2
			 	pLista2=pLista->clone(pLista);
			 	printf("Lista clonada\n");
				break;
		case 13://SUBLIST
				from=validarIndex(pLista->size);
				to=validarIndex(pLista->size);
				aux=(int)NULL;
				for(i=0;i<=to;i++){
					//printf("%p,%p",pLista,pLista2);
					add(pLista2,&aux);
				}
				pLista2=pLista->subList(pLista,from,to);
			
				break;
		case 14://CLEAR
				clear(pLista);
				clear(pLista2);
				pLista = newArrayList();
				pLista2 = newArrayList();
				printf("BORRADO COMPLETO DE LOS 2 ARRAYS\n");
				break;
			
		case 15://MOSTRAR LISTA 1
				printf("LISTA 1:\n");					
				for(c=0;c<pLista->size;c++)
				{
				printf("%d\n",get(pLista,c));				
				}
				break;
		case 16://MOSTRAR LISTA 2
			
				printf("LISTA 2:\n");
				for(c=0;c<pLista2->size;c++)
				{
				printf("%d\n",get(pLista2,c));				
				}
				break;
		case 17:
				
				
				pLista2=pLista->clone(pLista);
				
				fflush(stdin);
				fseek(fdato, 0L, SEEK_END);
				fwrite(&pLista2, sizeof(pLista2), pLista2->size, fdato);
				
				fclose(fdato);
				exit(0);
				
	  }			

	system("pause");
	system("cls");

	}
	return 0;
}

  
