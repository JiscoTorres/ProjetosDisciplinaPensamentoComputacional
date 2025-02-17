#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main() {
setlocale(LC_ALL, "Portuguese");

  char sexo;
  float altura, pesoIdeal;

  printf("Informe seu sexo (M para masculino, F para feminino): ");
  scanf(" %c", &sexo);

  printf("Informe sua altura em centímetros: ");
  scanf("%f", &altura);



  switch (sexo) {
      
      case 'M':
          pesoIdeal = 52 + (0.75 * (altura - 152.4));
          break;
      
      
      case 'F':
          pesoIdeal = 52 + (0.67 * (altura - 152.4));
          break;
          
          
      default:
          printf("Sexo inválido!\n");
          return 1;
  }

  printf("Seu peso ideal eh: %.2f kg\n", pesoIdeal);
}
