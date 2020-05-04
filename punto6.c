#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int *data = malloc(100 * sizeof(int));
    free(data);
    data[99] = 99;
    return 0;
}