#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){

  char* text;
  int textSize;
  printf("Ingrese el tamaño del texto a ingresar (pequeño porfa :c) -> ");
  scanf("%d",&textSize);
  printf("El tamaño ingresado es: %d\n", textSize);
  getchar();
   //Asignamos la memoria dinámica
  text = (char*) malloc(textSize * sizeof(char));
  printf("\nIngrese el texto a almacenar:");
  scanf("%[^\n]",text);
  printf("El siguiente texto se almacenará: %s\n", text);
  
  return 0;
}