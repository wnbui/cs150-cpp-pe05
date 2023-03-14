#include <iostream>
#include <string>
using namespace std;

// Given a string and a non-empty substring sub, compute recursively the number of times that sub appears
// in the string, without the sub strings overlapping.

// strCount("catcowcat", "cat") → 2
// strCount("catcowcat", "cow") → 1
// strCount("catcowcat", "dog") → 0

int strCount(string str, string sub)
{
    size_t len{str.size()}, slen{sub.size()};
    // base case
    if (slen > len)
    {
        return 0;
    }
    
    // look for matching of size slen
    // if matches, +1 and recursive call starting at index slen
    if (str.substr(0, slen) == sub)
    {
        return 1 + strCount(str.substr(slen), sub);
    }
    // not matching, recursive call starting at index 1
    return strCount(str.substr(1), sub);
}

int main()
{
    cout << "Input catcowcat, cat : Expected 2 : Actual " << strCount("catcowcat", "cat") << endl;
    cout << "Input catcowcat, cow : Expected 1 : Actual " << strCount("catcowcat", "cow") << endl;
    cout << "Input catcowcat, dog : Expected 0 : Actual " << strCount("catcowcat", "dog") << endl;
    cout << "Input cacatcowcat, cat : Expected 2 : Actual " << strCount("cacatcowcat", "cat") << endl;
    cout << "Input xyx, x : Expected 2 : Actual " << strCount("xyx", "x") << endl;
    cout << "Input iiiijj, i : Expected 4 : Actual " << strCount("iiiijj", "i") << endl;
    cout << "Input iiiijj, ii : Expected 2 : Actual " << strCount("iiiijj", "ii") << endl;
    cout << "Input iiiijj, iii : Expected 1 : Actual " << strCount("iiiijj", "iii") << endl;
    cout << "Input iiiijj, j : Expected 2 : Actual " << strCount("iiiijj", "j") << endl;
    cout << "Input iiiijj, jj : Expected 1 : Actual " << strCount("iiiijj", "jj") << endl;
    cout << "Input aaabababab, ab : Expected 4 : Actual " << strCount("aaabababab", "ab") << endl;
    cout << "Input aaabababab, aa : Expected 1 : Actual " << strCount("aaabababab", "aa") << endl;
    cout << "Input aaabababab, a : Expected 6 : Actual " << strCount("aaabababab", "a") << endl;
    cout << "Input aaabababab, b : Expected 4 : Actual " << strCount("aaabababab", "b") << endl;
}
