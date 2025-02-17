#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
int acao;
setlocale(LC_ALL, "Portuguese");

printf("Informe a Acao desejada: ");
printf("1. Check.in: ");
printf("2. Chamar servico de quarto: ");
printf("3. Fazer Pedido: ");
scanf("%d", acao);
  
switch (acao){
  
  case 1:
  printf("Recepcao atualizada para: Check.in");

    case 2:
  printf("Recepcao atualizada para: Chamar servico de quarto");
  break;
  
  
    case 3:
  printf("Recepcao atualizada para: Fazer Pedido");
  break;
  
  
  default:
  printf("Insira uma opcao valida!");
}
}
