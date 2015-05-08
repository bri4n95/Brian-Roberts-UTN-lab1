

void mostrarResultado(palabra auxPalabras[], int size_array)
{

}

void inicializarArray(palabra * auxPalabras, int size_array)
{

}

void ordenarArray(palabra * auxPalabras, int size_array)
{

}

int leerArchivo(char nombre[],char contenido[])
{
	FILE *f;
	char aux_cadena[100];
	contenido[0] = '\0';

	f = fopen(nombre, "r");

	if (f==NULL)
	{
	   return -1;
	}

	while (fscanf (f, "%c", aux_cadena) != EOF )
	{
		  strcat(contenido,aux_cadena);
	}
	fscanf (f, "%s", contenido);

	return 1;
}

int contar(char aux[])
{
    
}
