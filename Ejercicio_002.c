/*
 ============================================================================
 Description : Desarrolle un programa en C que ordene un conjunto de números. Utilizar el algoritmo de la burbuja (bubble sort)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void pintarArrayNumeros(int *array, int num_elementos);
void ordenacionBurbuja(int *array, int num_elementos);

int main(void){
	int numeros[11] = {3, 5 , 9, 2, 4, 32, 6, 8, 9, 3, 4};

	int numeroElementosArray = sizeof(numeros)/sizeof(numeros[0]);
	printf("Número de elementos del array %d \n", numeroElementosArray);

	printf("Los elementos del array ante de ordenarlo son: \n");
	pintarArrayNumeros(numeros, numeroElementosArray);
	ordenacionBurbuja(numeros, numeroElementosArray);
	printf("Los elementos del array ya ordenados son: \n");
	pintarArrayNumeros(numeros, numeroElementosArray);


}

void pintarArrayNumeros(int *array, int num_elementos){
	for (int i=0; i < num_elementos; i++){
		printf("%d \n", array[i]);
	}
}

void ordenacionBurbuja(int *array, int num_elementos){
	for (int i = 0; i < num_elementos; i++){
		for (int j = 0; j < num_elementos; j++){
			if (j+1 <= num_elementos){ //Condicion para no sobrepasar el límite del array
				if (array[j] > array[j+1]){
					int aux = array[j+1];
					array[j+1] = array[j];
					array[j] = aux;
				}
			}
		}
	}
}


