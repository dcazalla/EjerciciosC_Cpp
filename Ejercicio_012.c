/*
* Diseñe un programa que tome dos números y efectúe la suma, resta, multiplicación o división
* de ambos operandos según la opción elegida por el usuario.
*/

#include <stdio.h>

int menu(){
	int opcion;
	printf("Elige una operación:\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Producto\n");
	printf("4. División\n");
	printf("5. Salir\n");
	scanf("%d", &opcion);
	return opcion;
}

void realiza_operacion(int operacion){
	int resultado;
	int valor1;
	int valor2;
	if (operacion >= 1 && operacion < 5){
		printf("Escriba dos números:\n");
		printf("Primer número: ");
		scanf("%d", &valor1);
		printf("Segudo número: ");
 		scanf("%d", &valor2);

	}
	switch (operacion){
	case 1: resultado = valor1 + valor2; printf("El resultado es: %d \n", resultado); break;
	case 2: resultado = valor1 - valor2; printf("El resultado es: %d \n", resultado); break;
	case 3: resultado = valor1 * valor2; printf("El resultado es: %d \n", resultado); break;
	case 4: resultado = valor1 / valor2; printf("El resultado es: %d \n", resultado); break;
	case 5: printf("Ha seleccionado salir del programa\n");
	default: printf("Debe seleccionar alguna de las opciones\n");
	}
}


int main(void){
	int opcion;
	do{
		opcion = menu();
		realiza_operacion(opcion);
	}while(opcion != 5);
}
