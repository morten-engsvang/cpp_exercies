#include<iostream>

double division(double i, double j = 2){
	return i/j;
}

int main(){
	int i = 10;
	int j = 5;
	std::cout << i << " / " << j << " = " << division(i,j) << std::endl;
	std::cout << "Without the second argument it gives: " << division(i) << std::endl;
	return 0;
}
