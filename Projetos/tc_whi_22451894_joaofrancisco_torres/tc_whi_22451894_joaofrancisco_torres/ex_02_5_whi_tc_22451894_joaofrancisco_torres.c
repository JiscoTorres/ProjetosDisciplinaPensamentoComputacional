#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  
  int fahrenheit = 32;
    double celsius;

    printf("CONVERSAO FAHREINHEIT - CELSIUS\n");
    printf("CELSIUS\tFAHREINHEIT\n");

    int i = 1;
    while (i <= 20) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%.2lf\t%d\n", celsius, fahrenheit);
        fahrenheit++;
        i++;
    }
}
