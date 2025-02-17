#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
   setlocale(LC_ALL, "Portuguese");
  
    int num_alunos = 4;
    int i = 1;
    float nota, soma = 0, media;

    printf("Calculo  da media de uma turma com %d alunos\n", num_alunos);

    while (i <= num_alunos) {
        printf("Digite a nota do aluno numero %d: ", i);
        scanf("%f", &nota);
        soma += nota;
        i++;
    }

    media = soma / num_alunos;
    printf("A media da turma eh: %.2f\n", media);

}
