#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char HM;
    float h, PesoIM, PesoIF;

    printf("Insira m para homem e f para mulher: ");
    scanf(" %c", &HM);

    printf("Insira sua altura: ");
    scanf("%f", &h);


    if (HM == 'm' || HM == 'M') { 
        PesoIM = (72.7 * h) - 58;
        printf("Seu Peso Ideal eh igual a %.2f e sua altura e igual a %.2f\n", PesoIM, h);
    } 
	
	
	else if (HM == 'f' || HM == 'F') {
        PesoIF = (62.1 * h) - 44.7;
        printf("Seu Peso Ideal eh igual a %.2f e sua altura e igual a %.2f\n", PesoIF, h);
    }
	
	
	else {
        printf("Insira m ou f\n");
    }

    return 0;
}
