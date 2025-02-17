#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


void main() {
setlocale(LC_ALL, "Portuguese");

float metros, pes;
    char tecla;

    printf("Conversao metros - pes\n");
    printf("Metros\tPes\n");

    for (metros = 0; metros <= 100; metros += 1) {
        pes = metros * 0.3048;
        printf("%.2f\t%.2f\n", metros, pes);

        if ((int)metros % 20 == 0 && metros != 0) {
            printf("Pressione ENTER para continuar...");
            getchar();
            system("cls"); // funciona para Limpar a tela ---> Um bizu para eu usar :)
            printf("Conversão metros - pes\n");
            printf("Metros\t Pes\n");
        }
    }
}
