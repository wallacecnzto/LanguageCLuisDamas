// Escreva u  programa que solicite oa usuario um numero e um caractere. Em seguida, terá que preencher n linhas, cada uma delas com n caracteres.

#include <stdio.h>

int main()
{
    int i;
    int j;
    int n;
    char ch;

    printf("Introduza um Nº: ");
    scanf("%d", &n);
    printf("Introduza um Charº: ");
    scanf(" %c", &ch);

    for ( i = 1; i <= n; i++) 
    {
        for ( j = 1; j <= n; j++) 
            putchar(ch);
        putchar('\n');
    }

}
