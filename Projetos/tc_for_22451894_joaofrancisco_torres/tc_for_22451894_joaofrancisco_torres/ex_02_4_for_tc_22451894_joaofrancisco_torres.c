#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");
    
    int numero, soma;



    for (numero = 30; numero >= 5; numero--) {
        
        if (numero % 3 == 0) {
            printf("%d ", numero);
            soma += numero;}
    
    
    }

    printf("\nA soma dos numeros divisiveis por 3 eh: %d\n", soma);

}
