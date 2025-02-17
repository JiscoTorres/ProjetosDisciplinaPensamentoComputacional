#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
   setlocale(LC_ALL, "Portuguese");
   
   int numero, contador = 0, soma = 0;

    printf("Digite numeros (digite -1 para parar):\n");


    while (1) {
        scanf("%d", &numero);

        if (numero == -1) {
            break;
        }
        
        contador++;
        soma += numero;
    }
    

    printf("Quantidade de numeros digitados: %d\n", contador);
    printf("Soma dos numeros: %d\n", soma);

}
