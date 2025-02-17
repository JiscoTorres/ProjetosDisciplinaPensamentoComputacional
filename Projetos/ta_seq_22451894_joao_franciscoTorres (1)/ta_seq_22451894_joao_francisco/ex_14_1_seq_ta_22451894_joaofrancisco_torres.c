#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
float Num1, Num2, Num3, MediaAtm;
setlocale(LC_ALL, "Portuguese");

printf("Digite o primeiro numero: ");
scanf("%f", &Num1);
  
printf("Digite o segundo numero: ");
scanf("%f", &Num2);

printf("Digite o terceiro numero: ");
scanf("%f", &Num3); 

//calculo media
MediaAtm = (Num1 + Num2 + Num3) / 3;
printf("a media aritmetica e: %f", MediaAtm);
}