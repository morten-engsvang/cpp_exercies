#include <iostream>
#include <iomanip>

int main(int nargs, char* vargs[]){
	int limit = std::atoi(vargs[1]);
	long int Fn2 = 0;
	long int Fn1 = 1;
	long int fibonacci;
	float golden;
	std::cout << Fn2 << std::endl;
	std::cout << Fn1 << std::endl;
	for(int i = 2; i < limit; ++i){
		fibonacci = Fn1 + Fn2;
		Fn2 = Fn1;
		Fn1 = fibonacci;
		std::cout << fibonacci << std::endl;
	}
	float temp1 = Fn2;
	float temp2 = fibonacci;
	golden = temp1/temp2; //Must use Fn2 due to the assignment in the loop above
	std::cout << "Best guess for the golden ratio: " << std::fixed << std::setprecision(12) << golden << std::endl;

	return 0;
}
