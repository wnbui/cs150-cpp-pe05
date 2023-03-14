#include <iostream>
#include <string>
using namespace std;

// Given a string that contains a single pair of parenthesis, compute recursively a new string made of
// only of the parenthesis and their contents, so "xyz(abc)123" yields "(abc)".

// parenBit("xyz(abc)123") → "(abc)"
// parenBit("x(hello)") → "(hello)"
// parenBit("(xy)1") → "(xy)"

string parenBit(string str)
{
    size_t len = str.size();
    // checking front
    // ignoring anything to the left of '('
    if (str.at(0) != '(')
    {
        if (str.at(len - 1) != ')')
        {
            return parenBit(str.substr(1, len - 2));
        }
        return parenBit(str.substr(1));
    }
    // recursive for second half
    // ignoring anything to the right of ')'
    if (str.at(len - 1) != ')')
    {
        return parenBit(str.substr(0, len - 1));
    }
    return str;
}

int main()
{
    cout << "Input xyz(abc)123 : Expected (abc) : Actual " << parenBit("xyz(abc)123") << endl;
    cout << "Input x(hello) : Expected (hello) : Actual " << parenBit("x(hello)") << endl;
    cout << "Input (xy)1 : Expected (xy) : Actual " << parenBit("(xy)1") << endl;
    cout << "Input not really (possible) : Expected (possible) : Actual " << parenBit("not really (possible)") << endl;
    cout << "Input (abc) : Expected (abc) : Actual " << parenBit("(abc)") << endl;
    cout << "Input (abc)xyz : Expected (abc) : Actual " << parenBit("(abc)xyz") << endl;
    cout << "Input (abc)x : Expected (abc) : Actual " << parenBit("(abc)x") << endl;
    cout << "Input (x) : Expected (x) : Actual " << parenBit("(x)") << endl;
    cout << "Input () : Expected () : Actual " << parenBit("()") << endl;
    cout << "Input res (ipsa) loquitor : Expected (ipsa) : Actual " << parenBit("res (ipsa) loquitor") << endl;
    cout << "Input hello(not really)there : Expected (not really) : Actual " << parenBit("hello(not really)there") << endl;
    cout << "Input ab(ab)ab : Expected (ab) : Actual " << parenBit("ab(ab)ab") << endl;
}
