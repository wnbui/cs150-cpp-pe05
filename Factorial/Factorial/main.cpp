#include <iostream>
#include <string>
using namespace std;

// Given n of 1 or more, return the factorial of n, which is n * (n-1) * (n-2) ... 1.
// Compute the result recursively (without loops).

// factorial(1) → 1
// factorial(2) → 2
// factorial(3) → 6

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << "Input 1 : Expected 1 : Actual " << factorial(1) << endl;
    cout << "Input 2 : Expected 2 : Actual " << factorial(2) << endl;
    cout << "Input 3 : Expected 6 : Actual " << factorial(3) << endl;
    cout << "Input 4 : Expected 24 : Actual " << factorial(4) << endl;
    cout << "Input 5 : Expected 120: Actual " << factorial(5) << endl;
    cout << "Input 6 : Expected 720 : Actual " << factorial(6) << endl;
    cout << "Input 7 : Expected 5040 : Actual " << factorial(7) << endl;
    cout << "Input 8 : Expected 40320 : Actual " << factorial(8) << endl;
    cout << "Input 12 : Expected 479001600 : Actual " << factorial(12) << endl;
}
