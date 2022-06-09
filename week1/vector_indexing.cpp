#include <vector>
#include <iostream>

using std::vector;

int main()
{
   vector<double> vec(5);
   double x = 1.618;
   std::cout << "A vector of length: " << vec.size() << std::endl;
   for(long unsigned int i = 0; i < vec.size(); ++i)//vec.size gives the length of the vector
   {
      vec[i] = x*i;
      std::cout << i << "," << vec[i] << std::endl;
   }

   return 0;
}
