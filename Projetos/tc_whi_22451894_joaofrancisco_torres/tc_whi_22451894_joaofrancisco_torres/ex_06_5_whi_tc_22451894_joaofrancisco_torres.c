#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
   setlocale(LC_ALL, "Portuguese");
   
   int numero, soma = 0;

    do {
        printf("Digite um numero [Para sair, digitar um numero negativo]: ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
        }
    } while (numero >= 0);

    printf("A soma dos numeros positivos eh: %d\n", soma);
}
