#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
 float Numero1; float Numero2; float ValorAdicaoNumeros; // Valores REAIS sao do tipo float!
 setlocale(LC_ALL, "Portuguese");
 
 printf("\n Insira o primeiro Numero: ");
 scanf("%f", &Numero1); 
 
 printf("\n Insira o segundo Numero: ");
 scanf("%f", &Numero2); 
 
 ValorAdicaoNumeros = Numero1 + Numero2;
 printf("\n O Valor da adicao dos numeros eh %f ", ValorAdicaoNumeros);
 
}
