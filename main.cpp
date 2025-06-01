// Trick math question testing the division and modulus operator
#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a five-digit integer: ";
    std::cin >> number;

    // Extract digits using division and modulus
    int first = number / 10000;
    int second = (number / 1000) % 10;
    int third = (number / 100) % 10;
    int fourth = (number / 10) % 10;
    int fifth = number % 10;

    // Print separated digits
    std::cout << first << "   " << second << "   " << third << "   " 
              << fourth << "   " << fifth << std::endl;

    return 0;
}
