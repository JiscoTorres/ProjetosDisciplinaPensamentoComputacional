#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{ 
float Raio; float Altura; float AreaCilindro;
 setlocale(LC_ALL, "Portuguese");
 
 printf("\n Insira o valor do Raio do Cilindro: ");
 scanf("%f", &Raio);
 
 printf("\n Insira o valor da Altura do Cilindro: ");
 scanf("%f", &Altura);
 
 AreaCilindro = 2*3.14*Raio*Altura;
 

  printf("\n O Valor da area Lateral do Cilindro eh %f ", AreaCilindro);
}
