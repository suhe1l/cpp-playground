// Sales-Commission Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double BASE_SALARY = 200.00;
    const double COMMISSION_RATE = 0.09;  // 9%
    double grossSales;
    double totalEarnings;
    
    // Set output formatting for currency
    cout << fixed << setprecision(2);
    
    // Input and process sales figures
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> grossSales;
    
    while (grossSales != -1) {
        // Calculate total earnings
        totalEarnings = BASE_SALARY + (grossSales * COMMISSION_RATE);
        
        // Display salary
        cout << "Salary is: $" << totalEarnings << endl;
        
        // Get next input
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> grossSales;
    }
    
    return 0;
}
