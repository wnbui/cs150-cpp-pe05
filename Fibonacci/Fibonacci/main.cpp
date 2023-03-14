#include <iostream>
#include <string>
using namespace std;

// The fibonacci sequence is a famous bit of mathematics, and it happens to have a recursive definition.
// The first two values in the sequence are 0 and 1 (essentially 2 base cases). Each subsequent value is
// the sum of the previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21 and so on.
// Define a recursive fibonacci(n) method that returns the nth fibonacci number, with n=0 representing the
// start of the sequence.

// fibonacci(0) → 0
// fibonacci(1) → 1
// fibonacci(2) → 1

int fibonacci(int n)
{
    if (n < 2)
        return n;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    cout << "Input 0 : Expected 0 : Actual " << fibonacci(0) << endl;
    cout << "Input 1 : Expected 1 : Actual " << fibonacci(1) << endl;
    cout << "Input 2 : Expected 1 : Actual " << fibonacci(2) << endl;
    cout << "Input 3 : Expected 2 : Actual " << fibonacci(3) << endl;
    cout << "Input 4 : Expected 3 : Actual " << fibonacci(4) << endl;
    cout << "Input 5 : Expected 4 : Actual " << fibonacci(5) << endl;
    cout << "Input 6 : Expected 6 : Actual " << fibonacci(6) << endl;
    cout << "Input 7 : Expected 13 : Actual " << fibonacci(7) << endl;
}
