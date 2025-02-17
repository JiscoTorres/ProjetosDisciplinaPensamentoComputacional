#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
 int Raio; float Area;
 setlocale(LC_ALL, "Portuguese");
 
 printf ("\n Insira o valor do Raio: ");
 scanf("%d", &Raio);
 
 Area = 3.14 * (Raio*Raio);
 printf("\n O Valor da area do circulo eh %d ", Area);
 
}
