#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char caracter;
    char cadena1[100];
    char cadena2[100];

    scanf("%c\n", &caracter);
    gets(cadena1);
    gets(cadena2);

    printf("%c\n", caracter);
    printf("%s\n",cadena1);
    printf("%s\n",cadena2);


    return 0;
}
