#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively a new string where all the lowercase 'x' chars have been moved to
// the end of the string.

// endX("xxre") → "rexx"
// endX("xxhixx") → "hixxxx"
// endX("xhixhix") → "hihixxx"

string endX(string str)
{
    // base case
    if (str.size() == 0)
    {
        return str;
    }
    
    // if x, recursive call and append x to end
    if (str[0] == 'x')
    {
        return endX(str.substr(1)) + 'x';
    }
    // not x, append char at index 0 to front and recursive call
    return str[0] + endX(str.substr(1));
}

int main()
{
    cout << "Input xxre : Expected rexx : Actual " << endX("xxre") << endl;
    cout << "Input xxhixx : Expected hixxxx : Actual " << endX("xxhixx") << endl;
    cout << "Input xhixhix : Expected hihixxx : Actual " << endX("xhixhix") << endl;
    cout << "Input hiy : Expected hiy : Actual " << endX("hiy") << endl;
    cout << "Input h : Expected h : Actual " << endX("h") << endl;
    cout << "Input x : Expected x : Actual " << endX("x") << endl;
    cout << "Input xxxxre : Expected xx : Actual " << endX("xx") << endl;
    cout << "Input \"\" : Expected \"\" : Actual " << endX("") << endl;
    cout << "Input bxax : Expected baxx : Actual " << endX("bxax") << endl;
    cout << "Input axaxax : Expected aaaxxx : Actual " << endX("axaxax") << endl;
    cout << "Input xxhxi : Expected hixxx : Actual " << endX("xxhxi") << endl;
}
