#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
//2.
int Valor1;
int Valor2; 
int SomaValores;
int SubtracaoValores;
int MultiplicacaoValores;
setlocale(LC_ALL, "Portuguese");


printf("\n Insira o primeiro Valor: ");
 scanf("%d", &Valor1); 
 
 printf("\n Insira o segundo Valor: ");
 scanf("%d", &Valor2); 
 
 SomaValores = Valor1 + Valor2;
 
 //a)
 SubtracaoValores = Valor1 - Valor2;
 printf("\n O Valor da Subtracao dos numeros eh %d ", SubtracaoValores);
 
 
 //b)
 MultiplicacaoValores = Valor1 * Valor2;
 printf("\n O Valor da multiplicacao dos numeros eh %d ", MultiplicacaoValores);
 
 
}
