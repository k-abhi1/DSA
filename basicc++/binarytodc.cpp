// binary to decmial conversion

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = 0, i = 0, rem;
    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    cout << "Decimal number: " << decimal;
    return 0;
}
// Input: 1010
// Output: Decimal number: 10