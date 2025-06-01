// The key insight is that if first is a multiple of second, then first % second will equal 0 (no remainder).
#include <iostream>
using namespace std;

int main() {
    int first, second;
    
    // Read two integers from user
    cout << "Enter two integers: ";
    cin >> first >> second;
    
    // Check if second is zero (to avoid division by zero)
    if (second == 0) {
        cout << "Error: Cannot check multiples with zero as the second number." << endl;
    }
    else {
        // Check if first is a multiple of second using remainder operator
        if (first % second == 0) {
            cout << first << " is a multiple of " << second << endl;
        }
        else {
            cout << first << " is not a multiple of " << second << endl;
        }
    }
    
    return 0;
}
