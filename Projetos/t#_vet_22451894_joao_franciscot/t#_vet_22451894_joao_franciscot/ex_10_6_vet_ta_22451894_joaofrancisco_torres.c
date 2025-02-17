#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
char palavra[100], palavraInvertida[100];
int i, tamanho;

printf("Digite uma palavra: ");
scanf("%s", palavra);

tamanho = strlen(palavra);

for (i = 0; i < tamanho; i++) {
    palavraInvertida[i] = palavra[tamanho - i - 1];
}

palavraInvertida[tamanho] = '\0'; 

printf("Palavra invertida: %s\n", palavraInvertida);

}
