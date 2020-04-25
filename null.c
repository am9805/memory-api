#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = NULL;
    *p = 3;
    printf("Número %d", (*p));
}