#include <iostream>
using namespace std;

// ITERATIVE APPROACH
long powerIterative(int base, int exponent) {
    long result = 1;
    
    // Multiply base by itself exponent times
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

// RECURSIVE APPROACH
long powerRecursive(int base, int exponent) {
    // Base case: any number to power 0 is 1
    if (exponent == 0) {
        return 1;
    }
    
    // Recursive case: base^n = base * base^(n-1)
    return base * powerRecursive(base, exponent - 1);
}

// OPTIMIZED RECURSIVE APPROACH (using divide and conquer)
long powerRecursiveOptimized(int base, int exponent) {
    // Base case
    if (exponent == 0) {
        return 1;
    }
    
    // If exponent is even: base^n = (base^(n/2))^2
    if (exponent % 2 == 0) {
        long halfPower = powerRecursiveOptimized(base, exponent / 2);
        return halfPower * halfPower;
    }
    // If exponent is odd: base^n = base * base^(n-1)
    else {
        return base * powerRecursiveOptimized(base, exponent - 1);
    }
}

int main() {
    int base = 2;
    int exponent = 10;
    
    cout << "Calculating " << base << "^" << exponent << ":" << endl;
    cout << "Iterative result: " << powerIterative(base, exponent) << endl;
    cout << "Recursive result: " << powerRecursive(base, exponent) << endl;
    cout << "Optimized recursive: " << powerRecursiveOptimized(base, exponent) << endl;
    
    cout << "\nStep-by-step for 2^4:" << endl;
    cout << "Iterative: 1 x 2 x 2 x 2 x 2 = 16" << endl;
    cout << "Recursive: 2 x power(2,3) = 2 x 8 = 16" << endl;
    cout << "Optimized: power(2,4) = power(2,2)^2 = 4^2 = 16" << endl;
    
    return 0;
}
