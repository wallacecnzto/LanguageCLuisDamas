#include <stdio.h>

int main()
{
    int x;

    printf("Introduza um Nº ");
    scanf("%d", &x);

    if(x > 0)
        printf("Número positivo\n");
    else
        printf("Número negativo\n");

}
