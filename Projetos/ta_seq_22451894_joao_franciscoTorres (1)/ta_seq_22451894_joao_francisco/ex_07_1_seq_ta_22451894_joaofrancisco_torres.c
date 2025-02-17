#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
int Raio; float Comprimento;
 setlocale(LC_ALL, "Portuguese");
 
 printf ("\n Insira o valor do Raio: ");
 scanf("%d", &Raio);
 
 Comprimento = 2 * 3.14 *Raio;
 printf("\n O Valor da area do Comprimento eh %f ", Comprimento);
}
