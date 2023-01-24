/*
 * Escreva um programa que solicite a um usuário um número e escreva  simultanemente a sequencia crescente e decrescente entre 1 e esse número.
  */

#include <stdio.h>

int main()
{
    //int i;
    //int j;
    //int n;

    //printf("Digite um número: ");
    //scanf("%d", &n);

    //for ( i = 1; i <= n; i++) {
    //    printf("%d  %d\n", i, n - i + 1);
    //}

    // Outra forma com apenas duas variaveis
    int i, n;

    printf("Introduza um Nº: ");
    scanf("%d", &n);

    for ( i = 1; i <= n ; i++) {
        printf("%d  %d\n", i, n - i + 1);
    }
}
