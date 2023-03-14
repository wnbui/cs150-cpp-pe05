#include <iostream>
#include <string>
using namespace std;

// Given base and n that are both 1 or more, compute recursively (no loops) the value of base to the n
// power, so powerN(3, 2) is 9 (3 squared).

// powerN(3, 1) → 3
// powerN(3, 2) → 9
// powerN(3, 3) → 27

int powerN(int base, int n)
{
    // base case
    if (n == 1)
    {
        return base;
    }
    // base times recursive call where powerN(3, 3) -> 3 * (3 * (3 * 1)) = 27
    return base * powerN(base, n - 1);
}

int main()
{
    cout << "Input 3, 1 : Expected 3 : Actual " << powerN(3, 1) << endl;
    cout << "Input 3, 2 : Expected 9 : Actual " << powerN(3, 2) << endl;
    cout << "Input 3, 3 : Expected 27 : Actual " << powerN(3, 3) << endl;
    cout << "Input 2, 1 : Expected 2 : Actual " << powerN(2, 1) << endl;
    cout << "Input 2, 2 : Expected 4 : Actual " << powerN(2, 2) << endl;
    cout << "Input 2, 3 : Expected 8 : Actual " << powerN(2, 3) << endl;
    cout << "Input 2, 4 : Expected 16 : Actual " << powerN(2, 4) << endl;
    cout << "Input 2, 5 : Expected 32 : Actual " << powerN(2, 5) << endl;
    cout << "Input 10, 1 : Expected 10 : Actual " << powerN(10, 1) << endl;
    cout << "Input 10, 2 : Expected 100 : Actual " << powerN(10, 2) << endl;
    cout << "Input 10, 3 : Expected 1000 : Actual " << powerN(10, 3) << endl;
}

