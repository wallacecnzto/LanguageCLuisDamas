// long int n_segundos(int n_horas)
// Devolve o número de segundos existentes em um conjunto de horas.

#include <stdio.h>

long int n_segundos(int n_horas)
{
    return n_horas != 0 ? (n_horas *= 3600) : n_horas;
}
