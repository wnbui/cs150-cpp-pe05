#include <iostream>
#include <string>
using namespace std;

// Given a string, return true if it is a nesting of zero or more pairs of parenthesis, like "(())" or
// "((()))". Suggestion: check the first and last chars, and then recur on what's inside them.

// nestParen("(())") → true
// nestParen("((()))") → true
// nestParen("(((x))") → false

bool nestParen(string str)
{
    size_t len = str.size();
    // base cases
    if (len == 0)
    {
        return true;
    }
    
    // check the first for '(' AND the last for ')'
    // if matches, recursive the substring inside first and last
    if (str.at(0) == '(' && str.at(len - 1) == ')')
    {
        return nestParen(str.substr(1, len - 2));
    }
    // not matching, return false
    return false;
}

int main()
{
    cout << "Input (()) : Expected true : Actual " << boolalpha << nestParen("(())") << endl;
    cout << "Input ((())) : Expected true : Actual " << boolalpha << nestParen("((()))") << endl;
    cout << "Input (((x)) : Expected false : Actual " << boolalpha << nestParen("(((x))") << endl;
    cout << "Input ((()) : Expected false : Actual " << boolalpha << nestParen("((())") << endl;
    cout << "Input ((()() : Expected false : Actual " << boolalpha << nestParen("((()()") << endl;
    cout << "Input () : Expected true : Actual " << boolalpha << nestParen("()") << endl;
    cout << "Input '\"\"' : Expected true : Actual " << boolalpha << nestParen("") << endl;
    cout << "Input (yy) : Expected false : Actual " << boolalpha << nestParen("(yy)") << endl;
    cout << "Input (()) : Expected true : Actual " << boolalpha << nestParen("(())") << endl;
    cout << "Input (((y)) : Expected false : Actual " << boolalpha << nestParen("(((y))") << endl;
    cout << "Input ((y))) : Expected false : Actual " << boolalpha << nestParen("((y)))") << endl;
    cout << "Input ((())) : Expected true : Actual " << boolalpha << nestParen("((()))") << endl;
    cout << "Input (()))) : Expected false : Actual " << boolalpha << nestParen("(())))") << endl;
    cout << "Input ((yy()))) : Expected false : Actual " << boolalpha << nestParen("((yy())))") << endl;
    cout << "Input (((()))) : Expected true : Actual " << boolalpha << nestParen("(((())))") << endl;
}
