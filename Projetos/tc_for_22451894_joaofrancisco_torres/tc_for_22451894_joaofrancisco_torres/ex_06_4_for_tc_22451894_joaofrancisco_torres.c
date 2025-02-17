#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


void main() {
setlocale(LC_ALL, "Portuguese");
    
    unsigned long int numero, soma = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%lu", &numero);

    while (numero > 0) {
        digito = numero % 10; // Serve para Obter o último dígito
        soma += digito;
        numero /= 10; // Removier o último dígito
    }

    printf("O numero digitado foi: %lu\n", numero);
    printf("A soma dos algarismos eh: %lu\n", soma);

}
