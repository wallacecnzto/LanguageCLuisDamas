#include <stdio.h>

// O problema do buffer do teclado
/*
int main (int argc, char *argv[])
{
    char ch1, ch2;

    printf("Introduza um caractere: ");
    scanf("%c", &ch1);

    printf("Introduza outro caractere: ");
    scanf("%c", &ch2);

    printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);

    return 0;
}
*/

// Solução para o problema do buffer do teclado
int main (int argc, char *argv[])
{
    char ch1, ch2;

    printf("Introduza um caractere: ");
    scanf("%c", &ch1);

    printf("Introduza outro caractere: ");
    scanf(" %c", &ch2); // resolvemos colocando um espaço em branco que diz para função ignorar todos os espaços em branco, new lines e tabs.

    printf("Os caracteres introduzidos foram '%c' e '%c'\n", ch1, ch2);

    return 0;
}

// Também podemos limpar todo o buffer usando a função fflush(stdin)
