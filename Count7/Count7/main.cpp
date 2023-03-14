#include <iostream>
#include <string>
using namespace std;

// Given a non-negative int n, return the count of the occurrences of 7 as a digit, so for example 717
// yields 2. (no loops). Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide
// (/) by 10 removes the rightmost digit (126 / 10 is 12).

// count7(717) → 2
// count7(7) → 1
// count7(123) → 0

int count7(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    // if 7, add 1 and recursive call
    if (n % 10 == 7)
    {
        return 1 + count7(n / 10);
    }
    // else not 7, recursive call
    else
    {
        return count7(n / 10);
    }
    
    // alternate
    // base case
    // if (n == 0)
    // {
    //    return 0;
    //}
    // return (n % 10 == 7) + count7(n / 10);
}

int main()
{
    cout << "Input 717 : Expected 2 : Actual " << count7(717) << endl;
    cout << "Input 7 : Expected 1 : Actual " << count7(7) << endl;
    cout << "Input 123 : Expected 0 : Actual " << count7(123) << endl;
    cout << "Input 77 : Expected 2 : Actual " << count7(77) << endl;
    cout << "Input 7123 : Expected 1 : Actual " << count7(7123) << endl;
    cout << "Input 771237 : Expected 3 : Actual " << count7(771237) << endl;
    cout << "Input 771737 : Expected 4 : Actual " << count7(771737) << endl;
    cout << "Input 47571 : Expected 2 : Actual " << count7(47571) << endl;
    cout << "Input 777777 : Expected 6 : Actual " << count7(777777) << endl;
    cout << "Input 70701277 : Expected 4 : Actual " << count7(70701277) << endl;
    cout << "Input 777576197 : Expected 5 : Actual " << count7(777576197) << endl;
    cout << "Input 99999 : Expected 0 : Actual " << count7(99999) << endl;
    cout << "Input 99799 : Expected 1 : Actual " << count7(99799) << endl;
}
