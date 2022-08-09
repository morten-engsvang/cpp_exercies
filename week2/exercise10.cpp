#include <iostream>

double* allocate(int size)
{
   double* ptr;

   if(size <= 10)
   {
      ptr = new double[size];
   }
   else
   {
      ptr = nullptr;
   }

   return ptr;
}

void deallocate(double* ptr)
{
   delete[] ptr;
}

int main()
{
   int size;

   std::cin >> size;

   double* ptr = allocate(size);
	
   if(ptr != 0){ //Nullpointer evaluates as false, seg-fault if you try to print a null-pointer
   	for(int i = 0; i < size; ++i)
   	{
      		ptr[i] = double(i + 1.0);
   	}

   	for(int i = 0; i < size; ++i)
   	{
      		std::cout << ptr[i] << std::endl;
   	}
   }

   deallocate(ptr);

   return 0;
}
