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
	while(1){
		string answer;
		cout << "Will you tell me your age (y/n):" << endl;
		cin >> answer;
		if(answer == "y"){
			int age;
			cout << "Please enter your age:" << endl;
			cin >> age;
			cout << "You are " << age << " years old" << endl;
			break;
		}
		else if(answer == "n"){
			cout << "That's okay, have a nice day" << endl;
			break;
		}
		else{
			cout << "I don't understand that answer, please enter only y or n" << endl;
			continue;
		}
	}
	return 0;
}
