#include <iostream>
#include <string>
using namespace std;

// Given a string and a non-empty substring sub, compute recursively if at least n copies of sub appear in
// the string somewhere, possibly with overlapping. N will be non-negative.

// strCopies("catcowcat", "cat", 2) → true
// strCopies("catcowcat", "cow", 2) → false
// strCopies("catcowcat", "cow", 1) → true

bool strCopies(string str, string sub, int n)
{
    size_t len{str.size()}, slen{sub.size()};
    // base cases
    if (n == 0)
    {
        return true;
    }
    if (slen > len)
    {
        return false;
    }
    
    // if match, -1 from n
    // eventually n == 0, returning true
    if (str.substr(0, slen) == sub)
    {
        return strCopies(str.substr(1), sub, n - 1);
    }
    // if no match, recursively call
    // eventually slen > len, returning false
    return strCopies(str.substr(1), sub, n);
}

int main()
{
    cout << "Input catcowcat, cat, 2 : Expected true : Actual " << boolalpha << strCopies("catcowcat", "cat", 2) << endl;
    cout << "Input catcowcat, cow, 2 : Expected false : Actual " << boolalpha << strCopies("catcowcat", "cow", 2) << endl;
    cout << "Input catcowcat, cow, 1 : Expected true : Actual " << boolalpha << strCopies("catcowcat", "cow", 1) << endl;
    cout << "Input iiijjj, i, 3 : Expected true : Actual " << boolalpha << strCopies("iiijjj", "i", 3) << endl;
    cout << "Input iiijjj, i, 4 : Expected false : Actual " << boolalpha << strCopies("iiijjj", "i", 4) << endl;
    cout << "Input iiijjj, ii, 2 : Expected true : Actual " << boolalpha << strCopies("iiijjj", "ii", 2) << endl;
    cout << "Input iiijjj, ii, 3 : Expected false : Actual " << boolalpha << strCopies("iiijjj", "ii", 3) << endl;
    cout << "Input iiijjj, x, 3 : Expected false : Actual " << boolalpha << strCopies("iiijjj", "x", 3) << endl;
    cout << "Input iiijjj, x, 0 : Expected true : Actual " << boolalpha << strCopies("iiijjj", "x", 0) << endl;
    cout << "Input iiiiij, iii, 3 : Expected true : Actual " << boolalpha << strCopies("iiiiij", "iii", 3) << endl;
    cout << "Input iiiiij, iii, 4 : Expected false : Actual " << boolalpha << strCopies("iiiiij", "iii", 4) << endl;
    cout << "Input ijiiiiij, iiii, 2 : Expected true : Actual " << boolalpha << strCopies("ijiiiiij", "iiii", 2) << endl;
    cout << "Input ijiiiiij, iiii, 3 : Expected false : Actual " << boolalpha << strCopies("ijiiiiij", "iiii", 3) << endl;
    cout << "Input dogcatdogcat, dog, 2 : Expected true : Actual " << boolalpha << strCopies("dogcatdogcat", "dog", 2) << endl;
}

