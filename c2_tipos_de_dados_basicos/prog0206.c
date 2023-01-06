#include <stdio.h>
int main (int argc, char *argv[])
{
  short int idade; // ou short idade
  int montante;
  long int n_conta; // ou long conta

  printf("Qual a idade: \n");
  scanf("%hd", &idade);
  printf("Qual o montante a depositar: \n");
  scanf("%d", &montante);
  printf("Qual o numero da conta: \n");
  scanf("%ld", &n_conta);

  printf("Uma pessoa de %hd anos depositou $%d na conta %ld\n", idade, montante, n_conta);
  return 0;
}
