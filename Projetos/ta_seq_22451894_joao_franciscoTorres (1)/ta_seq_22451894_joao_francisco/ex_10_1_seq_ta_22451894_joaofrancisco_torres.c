#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
	
 int a, b; float Raiz;
 setlocale(LC_ALL, "Portuguese");
 
 printf("Informe o valor de A: ");
 scanf("%d", &a);
  
 printf("Informe o valor de B: ");
 scanf("%d", &b);
 
 Raiz = -(b/a);
 //Nao precisa explicar que a equacao possui infinitas solucoes, entao deixar no valor geral
 
 printf("\n O Valor da raiz da equacao de primeiro grau ax + b = 0 eh %.2f ", Raiz);
 
 
}

