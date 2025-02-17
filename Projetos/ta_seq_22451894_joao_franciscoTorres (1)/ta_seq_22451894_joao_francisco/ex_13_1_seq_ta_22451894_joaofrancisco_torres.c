#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
int Pes;
float pesmetros;
setlocale(LC_ALL, "Portuguese");

printf("digite o valor dos Pes: ");
scanf("%d", &Pes);

pesmetros = Pes * 0.3048;

printf("o valor em metros e: %f",pesmetros);
}