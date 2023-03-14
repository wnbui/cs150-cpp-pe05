#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively (no loops) the number of lowercase 'x' chars in the string.

// countX("xxhixx") → 4
// countX("xhixhix") → 3
// countX("hi") → 0

int countX(string str)
{
    // base case
    if (str.size() == 0)
    {
        return 0;
    }
    
    if (str.at(0) == 'x')
    {
        return 1 + countX(str.substr(1));
    }
    return countX(str.substr(1));
}

int main()
{
    cout << "Input xxhixx : Expected 4 : Actual " << countX("xxhixx") << endl;
    cout << "Input xhixhix : Expected 3 : Actual " << countX("xhixhix") << endl;
    cout << "Input hi : Expected 0 : Actual " << countX("hi") << endl;
    cout << "Input h : Expected 0 : Actual " << countX("h") << endl;
    cout << "Input x : Expected 1 : Actual " << countX("x") << endl;
    cout << "Input \"\" : Expected 0 : Actual " << countX("") << endl;
    cout << "Input hihi : Expected 0 : Actual " << countX("hihi") << endl;
    cout << "Input hiAAhi12hi : Expected 0 : Actual " << countX("hiAAhi12hi") << endl;
}
