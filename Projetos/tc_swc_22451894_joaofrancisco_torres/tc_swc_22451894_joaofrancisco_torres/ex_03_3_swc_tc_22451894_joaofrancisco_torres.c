#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");

int codigo;

    printf("Digite o c�digo do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 100:
            printf("Produto: Detergente\n");
            printf("Valor: R$ 1.59\n");
            break;
        case 101:
            printf("Produto: Esponja\n");
            printf("Valor: R$ 4.59\n");
            break;
        case 102:
            printf("Produto: L� de a�o\n");
            printf("Valor: R$ 1.79\n");
            break;
        default:
            printf("Produto n�o encontrado.\n");
    }
    
}
