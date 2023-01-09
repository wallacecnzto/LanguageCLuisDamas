#include <stdio.h>

int main (int argc, char *argv[])
{
    char ch;
    printf("Introduza um caractere: ");
    ch = getchar(); // função específica para capturar somente um caractere - substitui o scanf
    printf("O caractere introduzido foi '%c'\n", ch);
    return 0;
}
