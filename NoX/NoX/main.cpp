#include <iostream>
#include <string>
using namespace std;

//Given a string, compute recursively a new string where all the 'x' chars have been removed.

// noX("xaxb") → "ab"
// noX("abc") → "abc"
// noX("xx") → ""

string noX(string str)
{
    string result = "";
    // base case
    if (str.size() == 0)
    {
        return str;
    }
    
    if (str.at(0) == 'x')
    {
        result += noX(str.substr(1));
    }
    else
    {
        result += str.at(0) + noX(str.substr(1));
    }
    return result;
}

int main()
{
    cout << "Input xaxb : Expected ab : Actual " << noX("xaxb") << endl;
    cout << "Input abc : Expected abc : Actual " << noX("abc") << endl;
    cout << "Input xx : Expected \"\" : Actual " << noX("xx") << endl;
    cout << "Input \"\" : Expected \"\" : Actual " << noX("") << endl;
    cout << "Input axxbxx : Expected ab : Actual " << noX("axxbxx") << endl;
    cout << "Input Hellox : Expected Hello : Actual " << noX("Hellox") << endl;
}

