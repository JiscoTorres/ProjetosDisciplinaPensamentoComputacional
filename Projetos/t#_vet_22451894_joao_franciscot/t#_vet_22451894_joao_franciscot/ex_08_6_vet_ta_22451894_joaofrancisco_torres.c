#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
    int a[10], b[20], comum[20], i, j, k = 0;

      
      printf("Digite os elementos do vetor a:\n");
      for (i = 0; i < 10; i++) {
          scanf("%d", &a[i]);
      }

      printf("Digite os elementos do vetor b:\n");
      for (i = 0; i < 20; i++) {
          scanf("%d", &b[i]);
      }


      for (i = 0; i < 10; i++) {
          for (j = 0; j < 20; j++) {
              if (a[i] == b[j]) {
                  comum[k++] = a[i];
                  break;
              }
          }
      }

      
      printf("\nElementos comuns:\n");
      for (i = 0; i < k; i++) {
          printf("%d ", comum[i]);
      }

  }
