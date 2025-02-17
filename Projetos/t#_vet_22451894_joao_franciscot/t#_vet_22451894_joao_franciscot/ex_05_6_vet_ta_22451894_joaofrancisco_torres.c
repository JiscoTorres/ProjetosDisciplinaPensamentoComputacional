#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

      int vetor1[10], vetor2[10], resultado[10];

      
      printf("Digite os valores do primeiro vetor:\n");
      for (int i = 0; i < 10; i++) {
          scanf("%d", &vetor1[i]);
      }

      printf("Digite os valores do segundo vetor:\n");
      for (int i = 0; i < 10; i++) {
          scanf("%d", &vetor2[i]);  

      }

     
      for (int i = 0; i < 10; i++) {
          resultado[i] = vetor1[i] + vetor2[i];
      }

     
      printf("\nResultado da soma:\n");
      for (int i = 0; i < 10; i++) {
          printf("%d ", resultado[i]);
      }
      printf("\n");


  }
