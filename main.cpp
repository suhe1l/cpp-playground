// Simple introduction to cast operation. 
#include <iostream>

int main() {
    char userChar;
    
    // Prompt user for input
    std::cout << "Enter a character: ";
    std::cin >> userChar;

    // Print integer equivalent using static_cast
    std::cout << "The integer equivalent of '" << userChar << "' is: " 
              << static_cast<int>(userChar) << std::endl;

    return 0;
}
