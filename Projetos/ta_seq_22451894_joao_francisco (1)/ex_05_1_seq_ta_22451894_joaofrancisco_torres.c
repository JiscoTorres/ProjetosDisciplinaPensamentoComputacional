#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void)
{
 float Fahrenheit, Celsius;	
 setlocale(LC_ALL, "Portuguese");
 
 
 printf("\n Insira o Valor a ser convertido: ");
 scanf("%f", &Fahrenheit); 
 
 
 Celsius = (Fahrenheit - 32)/1.8;
 printf("\n O Valor de %f convertido para Celsius eh: %f", Fahrenheit, Celsius);
}

