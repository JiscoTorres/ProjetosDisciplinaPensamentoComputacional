#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, peso1, peso2, media;
    int calcularPonderada;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    
    printf("Deseja calcular a média ponderada? (1 para Sim ou 0 para Nao): ");
    scanf("%d", &calcularPonderada);

    if (calcularPonderada) {
        printf("Digite o peso da primeira nota: ");
        scanf("%f", &peso1);

        printf("Digite o peso da segunda nota: ");
        scanf("%f", &peso2);

       
        media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    } else {
      
        media = (nota1 + nota2) / 2;
    }


    printf("Media do aluno: %.2f ", media);


    if (media >= 5) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
