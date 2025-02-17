

int main()
{
int dia;
setlocale(LC_ALL, "Portuguese");

printf("Digite um Numero de 1 ateh 7: ");
scanf("%d", &dia);
  
switch (dia){
  
  case 1:
  case 7:
  printf("Final de Semana!");
  break;

  
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  printf("Dia util!");  
  break; 
  
  default:
  printf("Numero Invalido!");
}
}
