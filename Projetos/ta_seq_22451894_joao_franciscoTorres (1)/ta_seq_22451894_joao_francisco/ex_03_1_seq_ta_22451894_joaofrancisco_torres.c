#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
 float Base; float Altura; float AreaTriangulo;
 setlocale(LC_ALL, "Portuguese");
 
 printf("\n Insira o valor da Base do Triangulo: ");
 scanf("%f", &Base);
 
 printf("\n Insira o valor da Altura do Triangulo: ");
 scanf("%f", &Altura);
 
 AreaTriangulo = (Base * Altura) / 2;
 
 //a)
  printf("\n O Valor da area do triangulo eh %.3f ", AreaTriangulo);//%.3f signifia que tera 3 casas decimais
  
  //b)
   printf("\n O Valor da base do triangulo eh %f, e o valor da altura do triangulo eh %f", Base, Altura);
}
