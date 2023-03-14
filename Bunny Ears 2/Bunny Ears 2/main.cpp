#include <iostream>
#include <string>
using namespace std;

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies (1, 3, ..) have the normal 2
// ears. The even bunnies (2, 4, ..) we'll say have 3 ears, because they each have a raised foot.
// Recursively return the number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).

// bunnyEars2(0) → 0
// bunnyEars2(1) → 2
// bunnyEars2(2) → 5

int bunnyEars2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    // even bunnies have 3 ears
    if (n % 2 == 0)
    {
        return 3 + bunnyEars2(n - 1);
    }
    // odd bunnies have 2 ears
    else
    {
        return 2 + bunnyEars2(n - 1);
    }
}

int main()
{
    cout << "Input 0 : Expected 0 : Actual " << bunnyEars2(0) << endl;
    cout << "Input 1 : Expected 2 : Actual " << bunnyEars2(1) << endl;
    cout << "Input 2 : Expected 5 : Actual " << bunnyEars2(2) << endl;
    cout << "Input 3 : Expected 7 : Actual " << bunnyEars2(3) << endl;
    cout << "Input 4 : Expected 10 : Actual " << bunnyEars2(4) << endl;
    cout << "Input 5 : Expected 12 : Actual " << bunnyEars2(5) << endl;
    cout << "Input 6 : Expected 16 : Actual " << bunnyEars2(6) << endl;
    cout << "Input 10 : Expected 25 : Actual " << bunnyEars2(10) << endl;
}
