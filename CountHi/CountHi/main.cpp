#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively (no loops) a new string where all the lowercase 'x' chars have been
// changed to 'y' chars.

// changeXY("codex") → "codey"
// changeXY("xxhixx") → "yyhiyy"
// changeXY("xhixhix") → "yhiyhiy"

string changeXY(string str)
{
    string result = "";
    // base case
    if (str.size() == 0)
    {
        return result;
    }
    
    // check for 'x'
    if (str.at(0) == 'x')
    {
        // appends 'x' in place of 'x' and recursive call
        result += 'y' + changeXY(str.substr(1));
    }
    // else not 'x'
    else
    {
        // append current char and recursive call
        result += str.at(0) + changeXY(str.substr(1));
    }
    return result;
}

int main()
{
    cout << "Input codex : Expected codey : Actual " << changeXY("codex") << endl;
    cout << "Input xxhixx : Expected yyhiyy : Actual " << changeXY("xxhixx") << endl;
    cout << "Input xhixhix : Expected yhiyhiy : Actual " << changeXY("xhixhix") << endl;
    cout << "Input hiy : Expected hiy : Actual " << changeXY("hiy") << endl;
    cout << "Input h : Expected h : Actual " << changeXY("h") << endl;
    cout << "Input x : Expected y : Actual " << changeXY("x") << endl;
    cout << "Input \"\" : Expected \"\" : Actual " << changeXY("") << endl;
    cout << "Input xxx : Expected yyy : Actual " << changeXY("xxx") << endl;
    cout << "Input cyyhxyiodex : Expected yyhxyi : Actual " << changeXY("yyhxyi") << endl;
    cout << "Input hihi : Expected hihi : Actual " << changeXY("hihi") << endl;
}

