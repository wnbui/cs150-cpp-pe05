#include <iostream>
#include <string>
using namespace std;

// Given a non-negative int n, compute recursively (no loops) the count of the occurrences of 8 as a
// digit, except that an 8 with another 8 immediately to its left counts double, so 8818 yields 4. Note
// that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the
// rightmost digit (126 / 10 is 12).

// count8(8) → 1
// count8(818) → 2
// count8(8818) → 4

int count8(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    // if 8, add 1 and recursive call
    if (n % 10 == 8)
    {
        // if 88, add 2 and recursive call
        if (n % 100 == 88)
        {
            return 2 + count8(n / 10);
        }
        return 1 + count8(n / 10);
    }
    // else not 7, recursive call
    else
    {
        return count8(n / 10);
    }
    
    // alternate
    // if (n == 0)
    // {
    //     return 0;
    // }
    // return (n % 10 == 8) + (n % 100 == 88) + count8(n / 10);
}

int main()
{
    cout << "Input 8 : Expected 1 : Actual " << count8(8) << endl;
    cout << "Input 818 : Expected 2 : Actual " << count8(818) << endl;
    cout << "Input 8818 : Expected 4 : Actual " << count8(8818) << endl;
    cout << "Input 8808 : Expected 4 : Actual " << count8(8808) << endl;
    cout << "Input 123 : Expected 0 : Actual " << count8(123) << endl;
    cout << "Input 81238 : Expected 2 : Actual " << count8(81238) << endl;
    cout << "Input 88788 : Expected 6 : Actual " << count8(88788) << endl;
    cout << "Input 8234 : Expected 1 : Actual " << count8(8234) << endl;
    cout << "Input 2348 : Expected 1 : Actual " << count8(2348) << endl;
    cout << "Input 23884 : Expected 3 : Actual " << count8(23884) << endl;
    cout << "Input 0 : Expected 0 : Actual " << count8(0) << endl;
    cout << "Input 1818188 : Expected 5 : Actual " << count8(1818188) << endl;
    cout << "Input 8818181 : Expected 5 : Actual " << count8(8818181) << endl;
    cout << "Input 1080 : Expected 1 : Actual " << count8(1080) << endl;
    cout << "Input 188 : Expected 3 : Actual " << count8(188) << endl;
    cout << "Input 88888 : Expected 9 : Actual " << count8(88888) << endl;
    cout << "Input 9898 : Expected 2 : Actual " << count8(9898) << endl;
    cout << "Input 78 : Expected 1 : Actual " << count8(78) << endl;
}
