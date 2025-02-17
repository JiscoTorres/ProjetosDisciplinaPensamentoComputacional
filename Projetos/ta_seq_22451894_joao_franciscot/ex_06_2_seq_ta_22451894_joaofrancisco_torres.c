#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
	
 setlocale(LC_ALL, "Portuguese");
 float precoC, precoV; 

    printf("Digite o preco de compra: ");
    scanf("%f", &precoC);

    printf("Digite o preco de venda: ");
    scanf("%f", &precoV); 

    if (precoV > precoC) {
        printf("Teve lucro.\nPreco de compra: R$ %.2f\nPreco de venda: R$ %.2f\n", precoC, precoV); 
    } 
	
	if (precoV < precoC) {
        printf("Teve prejuizo.\nPreco de compra: R$ %.2f\nPreco de venda: R$ %.2f\n", precoC, precoV); 
    } 
	
	else {
        printf("Os valores sao iguais.\nPreco de compra: R$ %.2f\nPreco de venda: R$ %.2f\n", precoC, precoV);
    }

}
