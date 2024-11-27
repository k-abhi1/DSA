#include <iostream>
using namespace std;

// Function to calculate factorial iteratively
unsigned long long factorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << "." << endl;
    }

    return 0;
}
