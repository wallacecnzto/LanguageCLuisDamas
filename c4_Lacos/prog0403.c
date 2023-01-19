#include <stdio.h>

// Escreva um programa que coloque na tela a tabuada do número 5

/*
int main()
{
    
    int n;
    n = 1;

    while (n <= 10) {
        printf("5 * %2d = %2d\n", n, n *5);
        n = n +1;
    }

}
*/

// Reescreva o programa anterior de modo a apresentar  a tabuada de qualquer número introduzido pelo usuário.

/*
int main()
{
    int n, num;

    printf("Introduza um nº: ");
    scanf("%d", &num);
    n = 1;

    while (n <= 10) {
        printf("%2d * %2d = %2d\n", num, n, num * n);
        n+= 1;
    }
}
*/

// Escreva o conjunto das cinco primeiras tabuadas.

#include <stdio.h>

int main()
{
    int n, num;

    num = 1;

    while (num <= 5) {
        n = 1;
        while (n <= 10) {
            printf("%2d * %2d = %2d\n", num, n, num * n);
            n+= 1;
        }
        num+= 1; // passar para a próxima tabuada
        putchar('\n'); // função que recebe um caractere e coloca na tela
    }
}
