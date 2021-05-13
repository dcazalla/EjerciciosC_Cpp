#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
* Leer una cadena de texto y encriptarla con el método César, desplazando el valor de
* cada carácter +3.nueva_cadena
*/

char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int posicion_letra(char c);

char buscar_caracter_por_posicion(int i);

void main(int argc, char *argv[]){
	int tamano = sizeof(alfabeto);

	if (argc > 1){
		for(int i=1; i < argc; i++){
			int size_cadena = strlen(argv[i]);
			char nueva_cadena[size_cadena];
			for(int j=0; j < size_cadena; j++){
				int k = posicion_letra(argv[i][j]);
				char cadena_aux[1];
				cadena_aux[0] = buscar_caracter_por_posicion(k);
				strcat(nueva_cadena, cadena_aux);
			}
			printf("%s\n", nueva_cadena);
			strcpy(nueva_cadena, "");
		}
	}
}

int posicion_letra(char c){
	int longitud = strlen(alfabeto);
	int posicion = 0;
	for (int i=0; i<longitud; i++){
		c = toupper(c);
		if (c == alfabeto[i]){
			posicion = i;
		}
	}
	return posicion;
}


char buscar_caracter_por_posicion(int pos){
	int num_max = sizeof(alfabeto);
	int nueva_posicion = pos+3;
	if (nueva_posicion >= num_max){
		nueva_posicion = nueva_posicion - num_max;
	}
	char caracter = alfabeto[nueva_posicion];
	return caracter;
}

