//Writing  program which should ask for a persons name and age
#include <iostream>
#include <string> 

using namespace std;

int main(){
	string s; //Ask for the name
	cout << "Please enter your name:" << endl;
	cin >> s;
	cout << "Hello World! " << s << endl; //Say hello to the user
	
	//Ask for the age
	string answer;
	int age;
	cout << "Please enter your age:" << endl;
	cin >> age;
	cout << "You are " << age << " years old" << endl;

	return 0;
}
