#include <iostream>
#include <vector>
#include <math.h> // for sqrt

double norm(const std::vector<double>& vec)
{
   double norm2 = 0.0;
   for(int i = 0; i < vec.size(); ++i)
   {
      norm2 += vec[i] * vec[i];
   }
   return std::sqrt(norm2);
}

int main()
{
   std::vector<double> vec(2);
   vec[0] = 1.0; vec[1] = 2.0;

   std::cout << norm(vec) << std::endl;

   return 0;
}
