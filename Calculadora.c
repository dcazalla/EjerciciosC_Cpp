/* Diseñe un programa que tome dos números y efectúe la suma, la resta, multiplicación
o división de ambos operandos según la opción elegida por el usuario. */

#include <stdio.h>

void main()
{
    int num1;
    int num2;
    int resultado;
    int op;
    while (op != 5)
    {
        printf("\nElija la operación a realizar:");
        printf("\n1. Suma");
        printf("\n2. Resta");
        printf("\n3. Multiplicación");
        printf("\n4. División");
        printf("\n5. Salir\n");
        scanf("%d", &op);
        if(op == 5){
            return;
        } else if (op > 5 || op < 0){
            printf("La operación elegida no existe");
            continue;
        }
     
            
        printf("\nIntroduzca dos números:\n");
        printf("\nPrimer número: ");
        scanf("%d", &num1);
        printf("\nSegundo número: ");
        scanf("%d", &num2);
        switch (op)
        {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            resultado = num1 / num2;
            break;
        
        }
        if (op > 0 & op < 5)
        {
            printf("El resultado es: %d \n", resultado);
        }
    }
}