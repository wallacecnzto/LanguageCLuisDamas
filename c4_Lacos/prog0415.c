// Escreva um programa em C que escreva na tela toda a tabela ASCII (0...255 chars), escrevendo em cada linha o código ASCII e o caractere correspondente.

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 255; i++) 
        printf("%3d - %c\n",i, (char) i);
}
