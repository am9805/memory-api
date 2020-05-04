#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    char *text = (char *) malloc(1 * sizeof(char));
    int textSize = 1;
    printf("Ingrese un caracter: \n");
    scanf(" %c", text);
    while(1) {
        char option;
        char newChar;
        printf("\n¿Desea seguir ingresando caracteres? [s/n]\n");
        scanf(" %c", &option);
        if(option == 'n') break;
        text = (char *) realloc(text, textSize + 1);
        ++textSize;
        printf("Ingrese un caracter: \n");
        scanf(" %c", &newChar);
        text[textSize - 1] = newChar;
    }
    printf("Texto junto ingresado: %s\n", text);
    return 0;
}