#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
 float Nota1, Nota2, MediaAritmetica;
 setlocale(LC_ALL, "Portuguese");
 
 
 printf("\n Insira o primeiro Valor: ");
 scanf("%f", &Nota1); 
 
 printf("\n Insira o segundo Valor: ");
 scanf("%f", &Nota2); 
 
 MediaAritmetica = (Nota1 + Nota2)/2;
 printf("A media aritmetica e: %.2f\n", MediaAritmetica);
}

