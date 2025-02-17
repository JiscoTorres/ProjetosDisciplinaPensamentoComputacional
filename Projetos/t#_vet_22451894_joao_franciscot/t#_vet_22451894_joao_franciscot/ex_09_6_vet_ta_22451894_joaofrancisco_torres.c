#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
   int v1[20], v2[20], resultado[20];
    char operacao[20];
    int i;

    
    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &v2[i]);
    }

    printf("Digite as operacoes (+, -, *, /):\n");
    for (i = 0; i < 20; i++) {
        scanf(" %c", &operacao[i]); 
    }

 
    for (i = 0; i < 20; i++) {
        switch (operacao[i]) {
            case '+':
                resultado[i] = v1[i] + v2[i];
                break;
            case '-':
                resultado[i] = v1[i] - v2[i];
                break;
            case '*':
                resultado[i] = v1[i] * v2[i];
                break;
            case '/':
                if (v2[i] != 0) {
                    resultado[i] = v1[i] / v2[i];
                } else {
                    printf("Divisao por zero na posicao %d\n", i);
                    resultado[i] = 0; 
                }
                break;
            default:
                printf("Operaaco invalida na posicao %d\n", i);
                resultado[i] = 0;
        }
    }


    printf("Resultados:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", resultado[i]);
    }

  }
