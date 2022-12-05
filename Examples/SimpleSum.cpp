//sum of two numbers || suma de dos numeros
#include <iostream>

int ad (int a, int b)
{ // a and b are local variables || a y b son variables locales
  int r;
  r = a + b;
  return r;
}

int main (void)
{
  int y;
  int x1 = 12;
  int x2 = 43;
  y = ad (x1,x2); // function of x1 and x2
  std::cout << x1 << " + " << x2 <<", The result is || El resultado es: " << y << "\n";
}
