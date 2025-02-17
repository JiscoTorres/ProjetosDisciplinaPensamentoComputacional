#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
 setlocale(LC_ALL, "Portuguese");

    int dia;

    printf("Digite um numero de 1 a 7 para representar um dia da semana (1 = Domingo, 7 = Sabado): ");
    scanf("%d", &dia);

    switch (dia) {
    	
    	// Para Sabado e domingo
        case 1:
        case 7:
            printf("Final de semana\n");
            break;
            
        // Para Dias de semana     
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia util\n");
            break;
            
        default:
            printf("Dia invalido\n");
    }

}
