#include <iostream>
#include <string>

int main(int nargs, char* vargs[]){
	float num1 = *vargs[1];
	float num2 = *vargs[2];
	std::string operation = vargs[3];
	float result;
	if(operation=="+"){
		result = num1+num2;
	}
	else if(operation=="-"){
		result = num1-num2;
	}
	else if(operation=="*"){
		result = num1*num2;
		//Does not work except if given * in quotation marks,
		//otherwise it gives the executable name.
	}
	else if(operation=="/"){
		result = num1/num2;
	}
	//Checking if the numbers are numbers:
	std::cout << num1 << operation << num2 << "=" << result << std::endl;

	return 0;
}
