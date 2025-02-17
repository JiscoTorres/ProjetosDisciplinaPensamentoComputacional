#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main (void)
{
	//Declaracao de variaveis
	int CodPeca; float ValorPeca; int QuantPeca; float VTP; 
	setlocale (LC_ALL, "Portuguese");
	
	
	//Entrada de dados:
	printf("\n Forneca Cod Placa: ");
	scanf("%d", &CodPeca);
	
	printf("\n Forneca o valor da peca: ");
	scanf ("%f", &ValorPeca);
	
	printf("\n Forneca a quantidade da pecas: ");
	scanf ("%d", &QuantPeca);
	
	
	//Valor Total da Peca e Saida de dados:
	VTP = ValorPeca * QuantPeca;
	printf("\n O Valor total da peca de codigo %d eh %.2f ", CodPeca, VTP);
}
