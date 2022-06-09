#include<iostream>

int main()
{
   int fac=1;
   int limit;
   std::cout << "Enter the number for which you want the factorial:" << std::endl;
   std::cin >> limit;
   for(int i = limit; i>0;--i){
      fac=fac*i;
   }

   std::cout << fac << std::endl; // I have not put std into global namespace
                                  // must prepend cout and endl with std::
   return 0;
}
