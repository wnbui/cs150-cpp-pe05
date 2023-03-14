#include <iostream>
#include <string>
using namespace std;

// We'll say that a "pair" in a string is two instances of a char separated by a char. So "AxA" the A's
// make a pair. Pair's can overlap, so "AxAxA" contains 3 pairs -- 2 for A and 1 for x. Recursively
// compute the number of pairs in the given string.

// countPairs("axa") → 1
// countPairs("axax") → 2
// countPairs("axbx") → 1

int countPairs(string str)
{
    // base case
    if (str.size() < 3)
    {
        return 0;
    }
    
    // if first char matches third char, +1 and recursive call
    if (str[0] == str[2])
    {
        return 1 + countPairs(str.substr(1));
    }
    // else recursive call
    return countPairs(str.substr(1));
}

int main()
{
    cout << "Input axa : Expected 1 : Actual " << countPairs("axa") << endl;
    cout << "Input axax : Expected 2 : Actual " << countPairs("axax") << endl;
    cout << "Input axbx : Expected 1 : Actual " << countPairs("axbx") << endl;
    cout << "Input hi : Expected 0 : Actual " << countPairs("hi") << endl;
    cout << "Input hihih : Expected 3 : Actual " << countPairs("hihih") << endl;
    cout << "Input ihihhh : Expected 3 : Actual " << countPairs("ihihhh") << endl;
    cout << "Input ihjxhh : Expected 0 : Actual " << countPairs("ihjxhh") << endl;
    cout << "Input \"\" : Expected 0 : Actual " << countPairs("") << endl;
    cout << "Input a : Expected 0 : Actual " << countPairs("a") << endl;
    cout << "Input aa : Expected 0 : Actual " << countPairs("aa") << endl;
    cout << "Input aaa : Expected 1 : Actual " << countPairs("aaa") << endl;
}
