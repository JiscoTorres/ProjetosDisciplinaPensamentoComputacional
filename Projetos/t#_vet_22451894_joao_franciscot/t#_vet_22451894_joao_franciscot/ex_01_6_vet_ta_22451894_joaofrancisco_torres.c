#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    
    
    
    // Declaracao de variaveis
    int vet[4]; // Vetor para armazenar 4 inteiros
    
    
    
    // Lendo os valores do usuario
    printf("Digite 4 valores:\n");
    
    for (int i = 0; i < 4; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }



    // Imprimindo os valores armazenados
    printf("Valores armazenados no vetor:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n"); // Para adicionar uma nova linha após os valores

    return 0; // Retorno da funcao main
}

