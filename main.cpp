#include <iostream>
#include <array>
using namespace std;

//Function to reverse the array (template to work with any size)
template<size_t N>
void reverseArray(array<int, N>& arr) {
    int size = arr.size();
    for (int i = 0; i < N / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }
}

//Function to print the array (template)
template<size_t N>
void printArray(const array<int, N>& arr) {
    for (size_t i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    //create an array of 5 integers
    array<int, 5> arr = {1, 2, 3, 4, 5};

    cout << "Original array: " ;
    printArray(arr);

    reverseArray(arr);

    cout << "Reversed array: ";
    printArray(arr);

    return 0;
}