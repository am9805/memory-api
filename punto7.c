#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int *data = malloc(100 * sizeof(int));
    int funnyNumber = 42;
    int *pointerToFunnyNumber = &funnyNumber;
    data[49] = pointerToFunnyNumber;
    printf("Número en la mitad del array: %d\n", data[49]);
    free(data);
    return 0;
}