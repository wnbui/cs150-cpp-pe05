#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively (no loops) the number of times lowercase "hi" appears in the string.

// countHi("xxhixx") → 1
// countHi("xhixhix") → 2
// countHi("hi") → 1

int countHi(string str)
{
    // base case
    if (str.size() < 2)
    {
        return 0;
    }
    
    // if first two chars are 'h' and 'i', + 1 and recusrive call starting at index 2
    if (str.at(0) == 'h' && str.at(1) == 'i')
    {
        return 1 + countHi(str.substr(2));
    }
    // else recursive call next index
    return countHi(str.substr(1));
}

int main()
{
    cout << "Input xxhixx : Expected 1 : Actual " << countHi("xxhixx") << endl;
    cout << "Input xhixhix : Expected 2 : Actual " << countHi("xhixhix") << endl;
    cout << "Input hi : Expected 1 : Actual " << countHi("hi") << endl;
    cout << "Input hihih : Expected 2 : Actual " << countHi("hihih") << endl;
    cout << "Input h : Expected 0 : Actual " << countHi("h") << endl;
    cout << "Input \"\" : Expected 0 : Actual " << countHi("") << endl;
    cout << "Input ihihihihih : Expected 4 : Actual " << countHi("ihihihihih") << endl;
    cout << "Input ihihihihihi : Expected 5 : Actual " << countHi("ihihihihihi") << endl;
    cout << "Input hiAAhi12hi : Expected 3 : Actual " << countHi("hiAAhi12hi") << endl;
    cout << "Input xhixhxihihhhih : Expected 3 : Actual " << countHi("xhixhxihihhhih") << endl;
    cout << "Input ship : Expected 1 : Actual " << countHi("ship") << endl;
}
