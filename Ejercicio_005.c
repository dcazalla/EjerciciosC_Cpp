/*
============================================================================
Description: Elabore un programa que abra un fichero de texto llamado numeros.txt,
leer los 10 números que hay en el fichero y colocarlos en una tabla.
============================================================================
*/

#include <stdio.h>

int main()
{
	int numeros[10];
	FILE *f;
	f = fopen("numeros.txt", "r");
	if (f == NULL){
		printf("Error al abrir el fichero\n");
	}else{
		printf("El archivo se ha abierto correctamente.\n");
		for (int i=0; i<10; i++){
			fscanf(f, "%d", &numeros[i]);
		}
		printf("Se muestra el contenido de la tabla de números:\n");
		for (int i=0; i<10;i++){
			printf("%d\n", numeros[i]);
		}

		fclose(f);
	}

}
