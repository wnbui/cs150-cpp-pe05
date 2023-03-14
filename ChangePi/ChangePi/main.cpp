#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively (no loops) a new string where all appearances of "pi" have been
// replaced by "3.14".

// changePi("xpix") → "x3.14x"
// changePi("pipi") → "3.143.14"
// changePi("pip") → "3.14p"

string changePi(string str)
{
    string result = "";
    // base case
    if (str.size() == 0)
    {
        return result;
    }
    
    // check for "pi"
    if (str.substr(0, 2) == "pi")
    {
        // append "3.14 and recursive call starting at index 2
        result += "3.14" + changePi(str.substr(2));
    }
    // else not "pi"
    else
    {
        // append char at index 0 and recursive call starting at index 1
        result += str.at(0) + changePi(str.substr(1));
    }
    return result;
}

int main()
{
    cout << "Input xpix : Expected x3.14x : Actual " << changePi("xpix") << endl;
    cout << "Input pipi : Expected 3.143.14 : Actual " << changePi("pipi") << endl;
    cout << "Input pip : Expected 3.14p : Actual " << changePi("pip") << endl;
    cout << "Input pi : Expected 3.14 : Actual " << changePi("pi") << endl;
    cout << "Input hip : Expected hip : Actual " << changePi("hip") << endl;
    cout << "Input p : Expected p : Actual " << changePi("p") << endl;
    cout << "Input x : Expected x : Actual " << changePi("x") << endl;
    cout << "Input \"\" : Expected \"\" : Actual " << changePi("") << endl;
    cout << "Input pixx : Expected 3.14xx : Actual " << changePi("pixx") << endl;
    cout << "Input xyzzy : Expected xyzzy : Actual " << changePi("xyzzy") << endl;
}
