#include<iostream>

int sum_up_to(int i){
	//Always remember the stopping criteria:
	if(i == 0){
		return 0;
	}
	return i + sum_up_to(i-1); //recursive return
}

int sum_up_to_faster(int i){
	if(i == 0){
		return 0;
	}
	else if(i%3 == 0){
		return 3*i-3 + sum_up_to_faster(i-3);
	}

	else if(i%2 == 0){
		return 2*i-1 + sum_up_to_faster(i-2); 
	}
	else {
		return i + sum_up_to(i-1);
	}

}

int recursive_factorial(int i){
	if(i == 0){
		return 1;
	}

	else if(i == 1){
		return 1;
	}
	return i*recursive_factorial(i-1);
}



int main(){
	int i;
	std::cout << "Write an integer" << std::endl;
	std::cin >> i;
	if(i < 0){
		std::cout << "This number is negative, try a positive number" << std::endl;
		return 0;
	}
	std::cout << "The simple sum is: " << sum_up_to(i) << std::endl;
	std::cout << "The fast sum is: " << sum_up_to_faster(i) << std::endl;
	std::cout << "The factorial is: " << recursive_factorial(i) << std::endl;



	return 0;
}
