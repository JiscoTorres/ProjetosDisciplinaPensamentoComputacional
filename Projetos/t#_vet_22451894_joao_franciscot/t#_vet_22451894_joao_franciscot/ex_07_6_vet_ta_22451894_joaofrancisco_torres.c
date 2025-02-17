#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

      int a[10], b[20], uniao[30], i, j, k = 0;

 
      printf("Digite os elementos do vetor a:\n");
      for (i = 0; i < 10; i++) {
          scanf("%d", &a[i]);
      }

      printf("Digite os elementos do vetor b:\n");
      for (i = 0; i < 20; i++) {
          scanf("%d", &b[i]);
      }


      for (i = 0; i < 10; i++) {
          uniao[k++] = a[i];
      }


      for (i = 0; i < 20; i++) {
          int encontrado = 0;
          for (j = 0; j < k; j++) {
              if (b[i] == uniao[j]) {
                  encontrado = 1;
                  break;
              }
          }
          if (!encontrado) {
              uniao[k++] = b[i];
          }
      }

      printf("\nVetor uniao:\n");
      for (i = 0; i < k; i++) {
          printf("%d ", uniao[i]);
      }
      printf("\n");

  }
