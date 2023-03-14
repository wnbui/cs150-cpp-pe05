#include <iostream>
#include <string>
using namespace std;

// Given a string and a non-empty substring sub, compute recursively the largest substring which starts
// and ends with sub and return its length.

// strDist("catcowcat", "cat") → 9
// strDist("catcowcat", "cow") → 3
// strDist("cccatcowcatxx", "cat") → 9

int strDist(string str, string sub)
{
    size_t len{str.size()}, slen{sub.size()};
    // base case
    if (slen > len)
    {
        return 0;
    }
    
    // checks front for matching
    if (str.substr(0, slen) == sub)
    {
        // checks back for matching
        // if matches, returns length of string as distance
        if (str.substr(len - slen, slen) == sub)
        {
            return len;
        }
        // end does not match, recursively call from the end
        // until match is found
        // if not match is found, slen > len and base case returns 0
        return strDist(str.substr(0, len - 1), sub);
    }
    // front does not match, recursively call from the front
    return strDist(str.substr(1), sub);
}

int main()
{
    cout << "Input catcowcat, cat : Expected 9 : Actual " << strDist("catcowcat", "cat") << endl;
    cout << "Input catcowcat, cow : Expected 3 : Actual " << strDist("catcowcat", "cow") << endl;
    cout << "Input cccatcowcatxx, cat : Expected 9 : Actual " << strDist("cccatcowcatxx", "cat") << endl;
    cout << "Input abccatcowcatcatxyz, cat : Expected 12 : Actual " << strDist("abccatcowcatcatxyz", "cat") << endl;
    cout << "Input xyx, x : Expected 3 : Actual " << strDist("xyx", "x") << endl;
    cout << "Input xyx, y : Expected 1 : Actual " << strDist("xyx", "y") << endl;
    cout << "Input xyx, z : Expected 0 : Actual " << strDist("xyx", "z") << endl;
    cout << "Input z, z : Expected 1 : Actual " << strDist("z", "z") << endl;
    cout << "Input x, z : Expected 0 : Actual " << strDist("x", "z") << endl;
    cout << "Input \"\", z : Expected 0 : Actual " << strDist("", "z") << endl;
    cout << "Input hiHellohihihi, hi : Expected 13 : Actual " << strDist("hiHellohihihi", "hi") << endl;
    cout << "Input hiHellohihihi, hih : Expected 5 : Actual " << strDist("hiHellohihihi", "hih") << endl;
    cout << "Input hiHellohihihi, o : Expected 1 : Actual " << strDist("hiHellohihihi", "o") << endl;
    cout << "Input hiHellohihihi, ll : Expected 2 : Actual " << strDist("hiHellohihihi", "ll") << endl;
}
