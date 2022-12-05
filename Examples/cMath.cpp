// Table of the Sine function || Tabla de resultados de Sen (x) con valores de x especifos..
#include <iostream>
#include <cmath>

int main ()
{

  double x = 0.0;
  
   for  (x=-M_PI ;x < M_PI ;  x+=0.1 )
    
    {
      std::cout << x << "\t" ;
      std::cout << sin(x)<< "\n";
      
       }
  
  return 0;
}
