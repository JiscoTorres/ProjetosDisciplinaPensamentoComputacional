#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void)
{
 setlocale(LC_ALL, "Portuguese");
 
 int num;
 
 printf("Insira o numero: ");
 scanf("%d", &num);
 
 printf("O  valor e %d", num);
 
if (num > 0) {
       printf("Numero Positivo. O dobro de %d e %d.\n", num, num * 2);
    }
	 else if (num < 0) {
        printf("Numero Negativo. O triplo de %d e %d.\n", num, num * 3);
    }
	 else {
        printf("Numero Nulo\n");
    }
}
