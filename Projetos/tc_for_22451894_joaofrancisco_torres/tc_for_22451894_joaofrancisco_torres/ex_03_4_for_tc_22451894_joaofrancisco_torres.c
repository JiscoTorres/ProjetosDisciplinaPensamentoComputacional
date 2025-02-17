#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");

 float f, c;

    // 50 primeiros valores negativos
    printf("Temperaturas negativas:\n");
    for (f = -50; f <= 0; f++) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%.2f °F = %.2f °C\n", f, c);
    }

    // 50 primeiros valores positivos
    printf("\nTemperaturas positivas:\n");
    for (f = 1; f <= 50; f++) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%.2f °F = %.2f °C\n", f, c);
    }

}
