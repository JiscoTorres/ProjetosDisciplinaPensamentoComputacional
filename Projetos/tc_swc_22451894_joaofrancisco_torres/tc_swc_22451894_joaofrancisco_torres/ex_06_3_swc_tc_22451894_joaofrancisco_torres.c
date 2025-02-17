#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");

int codigoProduto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigoProduto);


    switch (codigoProduto) {
           
        case 1:
            printf("Alimento nao eh perecivel\n");
            break;
            
        case 2:
            printf("Alimento eh perecivel\n");
            break;
            
        case 3:
            printf("Vestuario\n");
            break;
            
        case 4:
            printf("Limpeza\n");
            break;
            
        default:
            printf("Codigo de produto invalido.\n");
    }

}
