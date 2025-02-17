#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes da equacao do segundo grau (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("A equacao possui duas raizes iguais: x1 = x2 = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("A equacao possui duas raizes distintas:\nx1 = %.2f\nx2 = %.2f\n", x1, x2);
    }

    return 0;
}
