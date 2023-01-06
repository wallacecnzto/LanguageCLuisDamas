#include <stdio.h>

/*
 * Existem 4 tipos de prefixos de inteiros:
 * short => inteiro pequeno 2 bytes
 * long => inteiro grande 4 bytes
 * signed => inteiro com sinal positivo e negativo
 * unsigned => inteiro sem sinal apenas numeros positivos
 *
 * A atribuição deve ser short int n; ou short n;
 * A atribuição deve ser long int n; ou long n;
 *
 * No scanf() e printf() devem ser usados %hd(short) e %ld(long)
 *
 */

int main (int argc, char *argv[])
{
  printf("O tamanho em bytes de um inteiro  = %d\n", sizeof(int));
  printf("O tamanho em bytes de um char  = %d\n", sizeof(char));
  printf("O tamanho em bytes de um float  = %d\n", sizeof(float));
  printf("O tamanho em bytes de um double  = %d\n", sizeof(double));
}
