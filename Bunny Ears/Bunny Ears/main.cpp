#include <iostream>
#include <string>
using namespace std;

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).

// bunnyEars(0) → 0
// bunnyEars(1) → 2
// bunnyEars(2) → 4

int bunnyEars(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 2 + bunnyEars(n - 1);
}

int main()
{
    cout << "Input 0 : Expected 0 : Actual " << bunnyEars(0) << endl;
    cout << "Input 1 : Expected 2 : Actual " << bunnyEars(1) << endl;
    cout << "Input 2 : Expected 4 : Actual " << bunnyEars(2) << endl;
    cout << "Input 3 : Expected 6 : Actual " << bunnyEars(3) << endl;
    cout << "Input 4 : Expected 8 : Actual " << bunnyEars(4) << endl;
    cout << "Input 5 : Expected 10 : Actual " << bunnyEars(5) << endl;
    cout << "Input 12 : Expected 24 : Actual " << bunnyEars(12) << endl;
    cout << "Input 50 : Expected 100 : Actual " << bunnyEars(50) << endl;
    cout << "Input 234 : Expected 468 : Actual " << bunnyEars(234) << endl;
}
