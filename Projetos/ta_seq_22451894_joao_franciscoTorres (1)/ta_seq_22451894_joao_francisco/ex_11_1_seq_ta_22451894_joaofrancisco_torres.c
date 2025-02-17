#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
int variavel1=0, variavel2=0;
setlocale(LC_ALL, "Portuguese");
  
printf("\n Os valores sao %d para o primeiro numero e %d para o segundo numero", variavel1, variavel2);

printf("\nDigite o primeiro valor: ");
scanf("%d", &variavel1);
  
printf("Digite o segundo valor: ");
scanf("%d", &variavel2);

printf("\n Os valores sao %d para o primeiro numero e %d para o segundo numero", variavel1, variavel2);

}