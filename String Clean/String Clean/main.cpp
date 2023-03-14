#include <iostream>
#include <string>
using namespace std;

// Given a string, return recursively a "cleaned" string where adjacent chars that are the same have been
// reduced to a single char. So "yyzzza" yields "yza".

// stringClean("yyzzza") → "yza"
// stringClean("abbbcdd") → "abcd"
// stringClean("Hello") → "Helo"

string stringClean(string str)
{
    // base case
    if (str.size() < 2)
    {
        return str;
    }
    
    // check if adjacent string match
    if (str[0] == str[1])
    {
        // recursive call, skipping over matching string
        return stringClean(str.substr(1));
    }
    // not matching, append char at index 0 and recursive call
    return str[0] + stringClean(str.substr(1));
}

int main()
{
    cout << "Input yyzzza : Expected yza : Actual " << stringClean("yyzzza") << endl;
    cout << "Input abbbcdd : Expected abcd : Actual " << stringClean("abbbcdd") << endl;
    cout << "Input Hello : Expected Helo : Actual " << stringClean("Hello") << endl;
    cout << "Input XXabcYY : Expected XabcY : Actual " << stringClean("XXabcYY") << endl;
    cout << "Input 112ab445 : Expected 12ab45 : Actual " << stringClean("112ab445") << endl;
    cout << "Input Hello Bookkeeper : Expected Helo Bokeper : Actual " << stringClean("Hello Bookkeeper") << endl;
}
