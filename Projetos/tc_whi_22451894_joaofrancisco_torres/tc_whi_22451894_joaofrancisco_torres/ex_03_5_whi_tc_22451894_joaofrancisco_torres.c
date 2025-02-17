#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
   setlocale(LC_ALL, "Portuguese");
  
   int inicio, fim;
   double celsius;




    printf("CONVERSAO FAHREINHEIT - CELSIUS\n");
    printf("CELSIUS\tFAHREINHEIT\n");

    printf("Digite o valor inicial em Fahrenheit: ");
    scanf("%d", &inicio);

    printf("Digite o valor final em Fahrenheit: ");
    scanf("%d", &fim);




    int fahrenheit = inicio;
    while (fahrenheit <= fim) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%.2lf\t%d\n", celsius, fahrenheit);
        fahrenheit++;
    }

}
