// Program to explain function prototypes
// Basically, with prototype, the actual function can be anywhere in the code,
// even after a function call. But only if there is a prototype. 

#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z); //Function prototype

int main() {
	cout << "Enter three integer values: ";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;
	//Invoke maximum
	cout << "The maximum integer value is: "
	<< maximum(int1, int2, int3) << endl;
}

// returns the largest of the three integers
int maximum(int x, int y, int z) {
	int maximumValue{x}; //assume x is the largest to start
	// determine whether y is greater than maximumValue
	if (y > maximumValue) {
		maximumValue = y; // make y the new maximumValue
	}
	if(z > maximumValue) {
		maximumValue = z; // make z maximum value
	}
	return maximumValue;
}
