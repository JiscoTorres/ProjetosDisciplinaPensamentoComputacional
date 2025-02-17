#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


void main() {
setlocale(LC_ALL, "Portuguese");

    int n;
    double h; // Usar double para maior precisão - fonte do stackoverflow, hahaha :)

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        h += 1.0 / i;
    }

    printf("O valor de H eh: %.6lf\n", h);
}
