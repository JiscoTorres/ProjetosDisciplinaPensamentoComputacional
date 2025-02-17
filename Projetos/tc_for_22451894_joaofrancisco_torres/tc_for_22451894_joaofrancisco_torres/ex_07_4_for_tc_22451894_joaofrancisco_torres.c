#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


void main() {
setlocale(LC_ALL, "Portuguese");

    int inicio, fim;

    printf("Digite o valor inicial da sequencia: ");
    scanf("%d", &inicio);

    printf("Digite o valor final da sequencia: ");
    scanf("%d", &fim);

    printf("Sequencia de %d ateh %d:\n", inicio, fim);

    for (int i = inicio; i <= fim; i++) {
        printf("%d ", i);
    }
    
}
