#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
  setlocale(LC_ALL, "Portuguese");

  int n, i = 1;
  double numero, soma = 0, media;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  while (i <= n) {
    printf("Digite o numero %d: ", i);
    scanf("%lf", &numero);
    soma += numero;
    i++;
  }

  media = soma / n;
  printf("A media dos numeros eh: %.2lf\n", media);
}
