#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");

char operacao;
int op1, op2, resultado;

printf("Informe qual operacao deseja operar: +, -, x, / \n");
scanf("%c", &operacao);

printf("Informe o valor do primeiro numero:\n");
scanf("%d", &op1);

printf("Informe o valor do segundo numero:\n");
scanf("%d", &op2);






switch(operacao){
 case '+':
      resultado = op1 + op2;
      printf("O resultado eh igual a %d", resultado);
      break;
      
     
 case '-':
      resultado =op1 - op2;
      printf("O resultado eh igual a %d", resultado);
      break; 
      
      
 case 'x':
      resultado =op1 * op2;
      printf("O resultado eh igual a %d", resultado);
      break;
      
      
  case '/':
      resultado =op1 / op2;
      printf("O resultado eh igual a %d", resultado);
      break;
      
      
  default:
      printf("Insira uma opcao valida!");
}
}
