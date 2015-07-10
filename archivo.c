#include <stdio.h>
#include <stdlib.h>

typedef struct  {
	char nom[51];
	int cod;
	int cod2;
	
} Personita;



int main(int argc, char *argv[]) {
	
		FILE	* fdato;
		char	opc;
		Personita archivo;
	
		
		if((fdato = fopen("archivo.dat","rb+")) == NULL)
		if((fdato = fopen("archivo.dat","wb+")) == NULL)
		{
			printf("\nError, no se puede abrir el archivo archivo.dat...");
			exit(1);
		}
		
	while(opc!=8)
	{
		printf("\n\n     OPCIONES:");
		printf("\n\n     1.- Alta");
		printf("\n     5.- Listar");
		printf("\n     7.- Salir");
		printf("\n\n\n     Elija la Opcion: ");

		scanf("%c", &opc);

		switch(opc)
		{
			case '1':
			rewind(fdato);//APUNTA EL ARCHIVO AL PRINCIPIO //coloca el indicador de posición de archivo para el stream apuntado por 'c' al comienzo del archivo.
			printf("\nCodigo: ");
			fflush(stdin);
			scanf("%d", &archivo.cod);
			printf("\nCodigo2: ");
			fflush(stdin);
			scanf("%d", &archivo.cod2);
		
			printf("\nNombre: ");
			fflush(stdin);
			scanf("%s", archivo.nom);
			fflush(stdin);

		
			fseek(fdato, 0L, SEEK_END);//APUNTA AL FINAL DEL ARCHIVO//coloca el indicador de posición de archivo para el stream apuntado por 'c' al final del archivo.
			fwrite(&archivo, sizeof(archivo), 1, fdato);//ESCRIBE EN ARCHIVO PASANDOLE EL DATO, EL TAMAÑO DEL DATO, Y CUANTS DATOS A GUARDAR
			
			
				break;




			case '5':
            	//listar(fdato, fdato2);
            		
            	printf("\nListado de datos de archivo");
				printf("\nCodigo\tNombre");
				printf("\n%d\t%s\t\t%d", archivo.cod, archivo.nom, archivo.cod2);

				break;

			case '7':
				fclose(fdato);
			
				//system("clear");
				exit(0);
		}
	}

	
	
	return 0;
	
}
