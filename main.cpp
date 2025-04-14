// Program: Asking for the name of the user and printing a welcome message.
#include <iostream>
using namespace std;

void printName(string name) {
	cout << "Hello, " << name << "! Welcome to the program"; 
}

int main() {
	string fullName;
	cout << "Enter your full name: ";
	getline(cin, fullName);

	printName(fullName);

	return 0;
}