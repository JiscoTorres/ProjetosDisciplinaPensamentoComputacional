#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
	
 setlocale(LC_ALL, "Portuguese");
 int a,b;
 
 printf("Insira o primeiro valor: ");
 scanf("%d", &a);
 
  printf("Insira o segundo valor: ");
  scanf("%d", &b);
  
  
  if (a > b){
  	printf("O maior valor e %d e o menor e %d", a, b);
  }
  
  if (b>a){
  	printf("O maior valor e %d e o menor e %d", b, a);
  }
  
  if (a == b){
  	printf("Os valores sao iguais entre si, no caso sao iguai a %d", b);
  }
}

