#include <stdio.h>

float Pot( float x, int n)
{
  float res;
  int i;

  for (i = 1, res = 1.0; i <= n; i++) 
    res*= x;
  return res;
  
}

int main ()
{
  printf("%f %f %f\n", Pot(2.0, 4), Pot(.1234, 3), Pot(3.0, 0));
}
