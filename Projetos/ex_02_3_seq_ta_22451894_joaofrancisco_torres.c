#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    
	int opcao;

    printf("Bem-vindo ao nosso hotel!\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Fazer check-in\n");
    printf("2 - Chamar servico de quarto\n");
    printf("3 - Fazer um pedido\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Bem-vindo! Por favor, apresente seus documentos.\n");
            break;
        case 2:
            printf("Seu pedido de servico de quarto foi registrado. Em breve, um funcionario ira atende-lo.\n");
            break;
        case 3:
            printf("Qual o seu pedido? Informe um de nossos atendentes.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
    
}

