// Simple program to read 5 integers and determine and print the largest and smallest integers
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    
    // Read five integers from user
    cout << "Enter five integers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    // Initialize largest and smallest with first number
    int largest = num1;
    int smallest = num1;
    
    // Compare with remaining numbers
    if (num2 > largest) largest = num2;
    if (num2 < smallest) smallest = num2;
    
    if (num3 > largest) largest = num3;
    if (num3 < smallest) smallest = num3;
    
    if (num4 > largest) largest = num4;
    if (num4 < smallest) smallest = num4;
    
    if (num5 > largest) largest = num5;
    if (num5 < smallest) smallest = num5;
    
    // Display results
    cout << "Largest integer: " << largest << endl;
    cout << "Smallest integer: " << smallest << endl;
    
    return 0;
}
