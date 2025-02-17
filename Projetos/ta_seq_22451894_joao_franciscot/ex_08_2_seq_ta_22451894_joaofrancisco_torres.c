#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Digite um valor numerico: ");
    scanf("%d", &valor);

    if (valor >= 100) {
        printf("O valor %d eh maior ou igual a cem.\n", valor);
    } else {
        printf("O valor eh é menor que cem.\n", valor);
    }

    return 0;
}
