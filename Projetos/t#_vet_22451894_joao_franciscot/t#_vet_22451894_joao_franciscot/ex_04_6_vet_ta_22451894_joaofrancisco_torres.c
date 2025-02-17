#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float notas[10], soma = 0, media;
    int acima_media = 0; // isso eh um contador para verificar as notas acima da media

    printf("Digite as notas dos 10 alunos:\n");

    for (int i = 0; i < 10; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    printf("\nRelatorio de Notas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
        if (notas[i] > media) {
            acima_media++;
        }
    }

    printf("MEdia da turma: %.2f\n", media);
    printf("Quantidade de notas acima da media: %d\n", acima_media);

}
