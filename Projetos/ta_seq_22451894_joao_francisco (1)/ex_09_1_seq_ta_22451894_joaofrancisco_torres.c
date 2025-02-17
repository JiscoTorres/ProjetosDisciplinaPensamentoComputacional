#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
 float Volume, Raio;
 setlocale(LC_ALL, "Portuguese");
 
 printf ("\n Insira o valor do Raio: ");
 scanf("%d", &Raio);
 
 Volume = (4.0/3.0) * 3.14 * Raio * Raio * Raio;
  printf("\n O Valor do volume eh %f ", Volume);
}

