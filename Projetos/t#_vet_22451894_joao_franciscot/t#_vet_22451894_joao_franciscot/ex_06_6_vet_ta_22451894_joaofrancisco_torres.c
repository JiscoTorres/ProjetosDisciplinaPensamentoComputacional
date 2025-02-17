#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

     int vetor[100];

      for (int i = 0; i < 100; i++) {
         
          if (i % 2 == 0) {
              vetor[i] = 1;
          } else {
              vetor[i] = 0;
          }
      }

      
      for (int i = 0; i < 100; i++) {
          printf("%d ", vetor[i]);
      }
      printf("\n");


  }
