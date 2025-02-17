#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 60


int main(void) {
  char entrada[MAX_CHAR + 1];
  int i = 0;

  printf("Digite uma palavra ou frase (mAximo 60 caracteres):\n");

  while (i < MAX_CHAR && (entrada[i] = getchar()) != '\n') {
      i++;
  }

  entrada[i] = '\0';

  int num_caracteres = strlen(entrada);

  printf("Voce digitou %d caracteres:\n%s\n", num_caracteres, entrada);


  }
