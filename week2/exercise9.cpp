#include<iostream>
#include<cmath>

int main(){
	int* p = new int[5];
	for(int i = 0; i < 5; ++i){
		p[i] = std::pow(i,3);
		std::cout << p[i] << std::endl;
	}
	delete[] p;
	std::cout << *p << std::endl;
	std::cout << &p[0] << std::endl;

	return 0;
}
