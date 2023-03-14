#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively (no loops) the number of "11" substrings in the string. The "11"
// substrings should not overlap.

// count11("11abc11") → 2
// count11("abc11x11x11") → 3
// count11("111") → 1

int count11(string str)
{
    // base case
    if (str.size() < 2)
    {
        return 0;
    }
    
    // check str of size 2 for "11"
    // if matches, +1 and recursive call starting at index 2
    if (str.substr(0, 2) == "11")
    {
        return 1 + count11(str.substr(2));
    }
    // not matching, recursive call starting at index 1
    return count11(str.substr(1));
}

int main()
{
    cout << "Input 11abc11 : Expected 2 : Actual " << count11("11abc11") << endl;
    cout << "Input abc11x11x11 : Expected 3 : Actual " << count11("abc11x11x11") << endl;
    cout << "Input 111 : Expected 1 : Actual " << count11("111") << endl;
    cout << "Input 1111 : Expected 2 : Actual " << count11("1111") << endl;
    cout << "Input 1 : Expected 0 : Actual " << count11("1") << endl;
    cout << "Input \"\" : Expected 0 : Actual " << count11("") << endl;
    cout << "Input hi : Expected 0 : Actual " << count11("hi") << endl;
    cout << "Input 11x111x1111 : Expected 4 : Actual " << count11("11x111x1111") << endl;
    cout << "Input 1x111 : Expected 1 : Actual " << count11("1x111") << endl;
    cout << "Input 1Hello1 : Expected 0 : Actual " << count11("1Hello1") << endl;
    cout << "Input Hello : Expected 0 : Actual " << count11("Hello") << endl;
}
