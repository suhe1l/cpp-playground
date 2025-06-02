#include <iostream>
using namespace std;

// ITERATIVE APPROACH
long factorialIterative(int n) {
    long result = 1;
    
    // Use a loop to multiply all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    
    return result;
}

// RECURSIVE APPROACH
long factorialRecursive(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    
    // Recursive case: n! = n * (n-1)!
    return n * factorialRecursive(n - 1);
}

int main() {
    int number = 5;
    
    cout << "Calculating factorial of " << number << ":" << endl;
    cout << "Iterative result: " << factorialIterative(number) << endl;
    cout << "Recursive result: " << factorialRecursive(number) << endl;
    
    // Show step-by-step for understanding
    cout << "\nStep-by-step breakdown:" << endl;
    cout << "5! = 5 × 4 × 3 × 2 × 1 = 120" << endl;
    cout << "Recursive: 5 × factorial(4) → 5 × 24 = 120" << endl;
    
    return 0;
}
