#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively the number of times lowercase "hi" appears in the string, however
// do not count "hi" that have an 'x' immedately before them.

// countHi2("ahixhi") → 1
// countHi2("ahibhi") → 2
// countHi2("xhixhi") → 0

int countHi2(string str)
{
    // base case
    if (str.size() < 2)
    {
        return 0;
    }
    
    // if char at 0 is NOT 'x' AND followed by "hi", +1 and recursive call
    if (str[0] != 'x' && str.substr(1, 2) == "hi")
    {
        return 1 + countHi2(str.substr(1));
    }
    // does not match criteria, so recursive call
    return countHi2(str.substr(1));
}

int main()
{
    cout << "Input ahixhi : Expected 1 : Actual " << countHi2("ahixhi") << endl;
    cout << "Input ahibhi : Expected 2 : Actual " << countHi2("ahibhi") << endl;
    cout << "Input xhixhi : Expected 0 : Actual " << countHi2("xhixhi") << endl;
    cout << "Input hixhi : Expected 1 : Actual " << countHi2("hixhi") << endl;
    cout << "Input hixhhi : Expected 2 : Actual " << countHi2("hixhhi") << endl;
    cout << "Input hihihi : Expected 3 : Actual " << countHi2("hihihi") << endl;
    cout << "Input hihihix : Expected 3 : Actual " << countHi2("hihihix") << endl;
    cout << "Input xhihihix : Expected 2 : Actual " << countHi2("xhihihix") << endl;
    cout << "Input xxhi : Expected 0 : Actual " << countHi2("xxhi") << endl;
    cout << "Input hixxhi : Expected 1 : Actual " << countHi2("hixxhi") << endl;
    cout << "Input hi : Expected 1 : Actual " << countHi2("hi") << endl;
    cout << "Input xxxx : Expected 0 : Actual " << countHi2("xxxx") << endl;
    cout << "Input h : Expected 0 : Actual " << countHi2("h") << endl;
    cout << "Input x : Expected 0 : Actual " << countHi2("x") << endl;
    cout << "Input \"\" : Expected 0 : Actual " << countHi2("") << endl;
    cout << "Input Hellohi : Expected 1 : Actual " << countHi2("Hellohi") << endl;
}
