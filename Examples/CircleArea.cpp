// Area of a circle and strings definitions || Area de un circulo con string y constantes (numeros y palabras). 
#include <iostream>
#include <string>

const double pi = 3.14159;
const std::string tab = "\t";
const std::string nl= "\n";

int main ()
{
  double r = 5.0;
  double circle;
  //Area of a circle || area del circulo
  circle = pi * r * r;
    std::cout << circle << tab << "is the area of a circle" << nl;
    std::cout << "of radius " << r << nl ;

  return 0;
}
