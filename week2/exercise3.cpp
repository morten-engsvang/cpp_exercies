#include<iostream>

int factorial(int limit) {
	int fac = 1;
	for(int i = limit; i>0; --i){
		fac=fac*i;
	}
	return fac;
}

int main(){
   int fac;
   int limit;
   std::cout << "Enter the number for which you want the factorial:" << std::endl;
   std::cin >> limit;
   fac = factorial(limit);

   std::cout << fac << std::endl;
   return 0;
}
