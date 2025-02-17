#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
float Valor1, Valor2, Soma, Subtracao;
setlocale(LC_ALL, "Portuguese");

printf("Digite o primeiro Valor: ");
scanf("%f", &Valor1);

printf("Digite o segundo Valor: ");
scanf("%f", &Valor2);

Soma = Valor1 + Valor2;
Subtracao = Valor1 - Valor2;

printf("A soma dos valores eh igual a %f e a subtracao eh igual a %f",Soma, Subtracao);
}