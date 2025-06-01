// Simple BMI calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height, bmi;
    int choice;

    cout << "Select measurement system:\n";
    cout << "1. Metric (kg/m)\n";
    cout << "2. Imperial (lbs/in)\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter weight (kg): ";
        cin >> weight;
        cout << "Enter height (meters): ";
        cin >> height;
        bmi = weight / (height * height);
    } else if (choice == 2) {
        cout << "Enter weight (lbs): ";
        cin >> weight;
        cout << "Enter height (inches): ";
        cin >> height;
        bmi = (weight * 703) / (height * height);
    } else {
        cout << "Invalid selection!";
        return 1;
    }

    cout << fixed << setprecision(2);
    cout << "\nYour BMI is: " << bmi << "\n";

    cout << "BMI Categories:\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal: between 18.5 and 24.9\n";
    cout << "Overweight: bewteen 25 and 29.9\n";
    cout << "Obese: 30 or greater\n";

    return 0;
}
