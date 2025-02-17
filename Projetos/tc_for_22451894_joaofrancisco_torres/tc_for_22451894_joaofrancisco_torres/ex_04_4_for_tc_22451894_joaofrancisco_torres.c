#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


void main() {
setlocale(LC_ALL, "Portuguese");

   float fahrenheit, celsius;

    for (int i = -50; i <= 50; i++) {
        fahrenheit = i;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);

        printf("%.2f °F = %.2f °C\n", fahrenheit, celsius);

        if (i % 25 == 0 && i != 0) {
            printf("Pressione ENTER para continuar...");
            getchar();
        }
    }

}
