#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){

  char* string;
  int texto;
  printf("Ingrese el tamaño del string:");
  scanf("%d",&texto);
  printf("el  tamaño igresado: %d\n",texto);
  getchar();
   //Asignamos la memoria dinámica
  string =(char*)malloc(texto*sizeof(char));
  printf("\nIngrese el texto a almacenar:");
  scanf("%[^\n]",string);
  printf("El siguiente texto se almacenará: %s", string);
  
  return 0;
}