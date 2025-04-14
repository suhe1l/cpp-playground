// Program: Asking for two numbers and checking which one is larger
#include <iostream>
using namespace std;

int max (int a, int b) {
	if ( a > b ) {
		return a;
	} else {
		return b;
	}
}

int main () {
	int firstNumber, secondNumber;

	cout << "You are required to enter two integers.\nEnter the first one: ";
	cin >> firstNumber;

	cout << "Nice! Now enter the second one: ";
	cin >> secondNumber;
	
	if (firstNumber == secondNumber) {
		cout << "Both numbers are equal: " << firstNumber << endl;
	} else {
		int largerNumber = max(firstNumber, secondNumber);
		cout << "The larger of the two is: " << largerNumber;
	}

	return 0;
}