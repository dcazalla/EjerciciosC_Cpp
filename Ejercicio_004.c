/*
============================================================================
Description: Desarrolle un programa en C que lea una palabra y la escriba al revés.
============================================================================
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palabra[100];

    printf("Escriba una palabra: ");
    scanf("%s", palabra);

    char palabradelreves[100];

    int tamanyo = strlen(palabra);
    for (int i = 0; i < tamanyo; i++)
    {
        char letra = palabra[tamanyo -1 - i];
        palabradelreves[i] = letra;
    }
    
    printf("%s", palabradelreves);

}