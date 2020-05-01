#include <stdio.h>
#include <stdlib.h>
#define NULL 0
int main() {
    int *p = NULL;
    *p = 3;
    printf("Número %d", (*p));
}