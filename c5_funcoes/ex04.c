/* Implemente as seguintes funcões 
 * 
 * int Abs(int x)
 *
 * Devolve o valor absoluto de x.
 *
 * Abs(-5) --> 5
 * Abs(5)  --> 5
 *
 * */


#include <stdio.h>

int Abs(int x)
{
    if (x < 0) {
        x = x * -1;
   }
    return x;
}

int main()
{
    printf("%d\n", Abs(-5));
    printf("%d\n", Abs(5));

}
