#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 int AnoNasc, idade;
 
 printf("Insira o seu ano de nascimento: ");
 scanf("%d", &AnoNasc);
 
 idade = 2024 - AnoNasc;
 
 printf("Sua idade e %d e voce nasceu em %d", idade, AnoNasc);
 
 if (idade >= 16){
 	printf("\n Voce tem idade para votar");
 }
 else{
 	printf("\n Voce nao tem idade para votar");
 }
 
}

