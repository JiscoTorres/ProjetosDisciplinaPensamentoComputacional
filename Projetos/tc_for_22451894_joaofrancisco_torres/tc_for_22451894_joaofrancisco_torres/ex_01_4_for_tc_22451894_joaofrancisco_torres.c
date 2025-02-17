#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");
    int N;
    float numero, soma, media;
     
    soma = 0;


    printf("Digite a quantidade de numeros (N): ");
    scanf("%d", &N);



    for (int i = 1; i <= N; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / N;

    printf("A media dos %d numeros eh: %.2f\n", N, media);
}
