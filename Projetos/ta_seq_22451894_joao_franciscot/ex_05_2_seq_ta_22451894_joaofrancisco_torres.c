#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 
 int valor;
 printf("Insira o valor: ");
 scanf("%d", &valor);
 
 
 if(valor % 2 == 0){// % calcula o resto da divisao! com isso, eh possivel saber se o numero eh par ou impar
 	printf("O Valor eh par");
 }
 
 else{
 	printf("O Valor eh impar!");
 }
}
