#include <iostream>
#include <string>
using namespace std;

// Given a non-negative int n, return the sum of its digits recursively (no loops). Note that mod (%) by
// 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the rightmost digit (126
// / 10 is 12).

// sumDigits(126) → 9
// sumDigits(49) → 13
// sumDigits(12) → 3

int sumDigits(int n)
{
    // base case is anyting under 10
    if (n < 10)
    {
        return n;
    }
    return n % 10 + sumDigits(n / 10);
}

int main()
{
    cout << "Input 126 : Expected 9 : Actual " << sumDigits(126) << endl;
    cout << "Input 49 : Expected 13 : Actual " << sumDigits(49) << endl;
    cout << "Input 12 : Expected 3 : Actual " << sumDigits(12) << endl;
    cout << "Input 10 : Expected 1 : Actual " << sumDigits(10) << endl;
    cout << "Input 1 : Expected 1 : Actual " << sumDigits(1) << endl;
    cout << "Input 0 : Expected 0 : Actual " << sumDigits(0) << endl;
    cout << "Input 730 : Expected 10 : Actual " << sumDigits(730) << endl;
    cout << "Input 1111 : Expected 1 : Actual " << sumDigits(1111) << endl;
    cout << "Input 11111 : Expected 5 : Actual " << sumDigits(11111) << endl;
    cout << "Input 10110 : Expected 3 : Actual " << sumDigits(10110) << endl;
    cout << "Input 235 : Expected 10 : Actual " << sumDigits(235) << endl;
}
