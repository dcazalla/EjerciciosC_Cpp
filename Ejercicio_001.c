/*
 ============================================================================
 Name        : EjerciciosECOEM_C.c
 Author      : dcazalla
 Version     :
 Copyright   : Your copyright notice
 Description : Desarrolle un programa en C que calcule el máximo de un conjunto de números.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {


	int numeros[11] = {3, 5 , 9, 2, 4, 32, 6, 8, 9, 3, 4};

	int valorTotal = sizeof(numeros) / sizeof(numeros[0]);

//	int valorTotal = calcularCuantosNumerosEnArray(numeros);
	printf("En el array hay %d números. \n" , valorTotal);

	int maximo = 0;
	for (int i = 0; i < valorTotal; i++){
		if (numeros[i] > maximo){
			maximo = numeros[i];
		}
	}

	printf("El número mayor es el: %d", maximo);
	return EXIT_SUCCESS;
}

