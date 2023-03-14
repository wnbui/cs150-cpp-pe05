#include <iostream>
#include <string>
using namespace std;

// We have triangle made of blocks. The topmost row has 1 block, the next row down has 2 blocks, the next
// row has 3 blocks, and so on. Compute recursively (no loops or multiplication) the total number of
// blocks in such a triangle with the given number of rows.

// triangle(0) → 0
// triangle(1) → 1
// triangle(2) → 3

int triangle(int n)
{
    if (n < 2)
    {
        return n;
    }
    // add the next bar in the triangle of triangle(n) to previous total
    // triangle(2) -> 2 + 1 + 0 = 3
    return n + triangle(n - 1);
}

int main()
{
    cout << "Input 0 : Expected 0 : Actual " << triangle(0) << endl;
    cout << "Input 1 : Expected 1 : Actual " << triangle(1) << endl;
    cout << "Input 2 : Expected 3 : Actual " << triangle(2) << endl;
    cout << "Input 3 : Expected 6 : Actual " << triangle(3) << endl;
    cout << "Input 4 : Expected 10 : Actual " << triangle(4) << endl;
    cout << "Input 5 : Expected 15 : Actual " << triangle(5) << endl;
    cout << "Input 6 : Expected 21 : Actual " << triangle(6) << endl;
    cout << "Input 7 : Expected 28 : Actual " << triangle(7) << endl;
}
