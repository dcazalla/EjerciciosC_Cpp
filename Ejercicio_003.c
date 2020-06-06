/*
 ============================================================================
 Name        : Ejercicio_003.c
 Author      : dcazalla
 Version     :
 Copyright   : Your copyright notice
 Description : Desarrolle un programa en C que realice las siguientes operaciones:
 - Preguntar al usuario con cuántos números desea trabajar.
 - Leer y almacenar los números convenientemente.
 - Hallar su media aritmética utilizando para ello una función maximo() y minimo(), cuya programación realizaste en la práctica anterior.
 - Hallar la semisuma de los valores máximo y mínimo mediante la función semisuma().
 - Mostrar por pantalla los valores obtenidos: media, máximo, mínimo y semisuma.
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int media();
int maximo(int numeros[], int size);
int minimo(int numeros[], int size);
//int semisuma();

int main(void){
	int num = 0;
	int numeros[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	printf("¿Con cuantos números desea trabajar (el número máximo es 10)? \n");
	scanf("%d", &num);
	printf("El número introducido es: %d \n", num);

	for (int i = 0; i < num; i++){
		printf("Introduzca el número %i :", i);
		scanf("%d", &numeros[i]);
	}

	int num_max = maximo(numeros, num);
	printf("El número mayor es el: %d \n", num_max);

	int num_min = minimo(numeros, num);
	printf("El número menor es el: %d \n", num_min);
}


int maximo(int numeros[], int size){
	int maximo = numeros[0];
	for (int i = 0; i < size; i++){
		if (numeros[i] > maximo){
			maximo = numeros[i];
		}
	}
	return maximo;
}


int minimo(int numeros[], int size){
	int minimo = numeros[0];
	for (int i = 0; i < size; i++){
		if (numeros[i] < minimo){
			minimo = numeros[i];
		}
	}
	return minimo;
}
