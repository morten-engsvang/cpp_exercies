#include<iostream>
using namespace std;

bool is_equal(int* array1, int* array2, int size){
	for(int i = 0; i < size; ++i){
		if(array1[i] == array2[i]){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}

bool is_not_equal(int* array1, int* array2, int size){
	int equality = is_equal(array1,array2,size);
	return !equality;
}

int main(){
	int array1[2];
	int array2[2];
	bool equality;
	array1[0] = 1;
	array1[1] = 2;
	array2[0] = 1;
	array2[1] = 2;
	equality = is_equal(array1,array2,2);
	if(equality){
		cout << " we are equal " << endl;
	}
	else{
		cout << " we are not equal " << endl;
	}
	cout << is_not_equal(array1,array2,2) << endl;
	return 0;
}
