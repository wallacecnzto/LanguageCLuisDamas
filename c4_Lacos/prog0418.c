// Escreva um programa que solicite a um usuário um número. Em seguida escreva todos os números inteiros a partir desse número, exceto os múltiplos de 3. Quando encontrar o primeiro múltiplo de 10 a execução termina.

#include <stdio.h>

int main()
{
    int i, n;

    printf("Introduza um Nº: ");
    scanf("%d", &n); 

    for(i = n; ; i++)
    {
        if (i % 10 == 0) {
            break;
            
        } else {
            if (i % 3 == 0) {
                continue;
                
            }
        }
        printf("%d\n", i);

    }
}
