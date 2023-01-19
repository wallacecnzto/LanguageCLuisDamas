#include <stdio.h>

int main(int argc, char *argv[])
{
    char Est_Civil;

    printf("Qual o estado civil: ");
    Est_Civil = getchar();

    switch (Est_Civil) {
        case 'c':
        case 'C':
            printf("Casado\n");
            break;
        case 's':
        case 'S':
            printf("Solteiro\n");
            break;
        case 'd':
        case 'D':
            printf("Divorciado\n");
            break;
        case 'v':
        case 'V':
            printf("Viúvo\n");
            break;
        default:
            printf("Estado Civil incorreto\n");
    }



}
