//Program: Checking whether a number is odd or even
#include <iostream>
using namespace std;

// using a string so that we can return a value instead of just printing 
// the value, so that we can use it again in the program.
string numberChecker(int x) {
	if ( x % 2 == 0 ) {
		return "even";
	} else {
		return "odd";
	}
}

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	string status = numberChecker(number); // stored in the variable called status
	cout << "The number is " << status << endl;

	return 0;
}