#include<iostream>

int main()
{
   double x = 2.0;
   double y;
   bool dosquare = true;

   if(dosquare==false)
   {
      y = x;
   }
   else
   {
      y = x*x;
   }

   std::cout << "Result is: " << y << std::endl;
   return 0; // lets see if we get this far
}
