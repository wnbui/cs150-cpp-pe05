#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively a new string where identical chars that are adjacent in the
// original string are separated from each other by a "*".

// pairStar("hello") → "hel*lo"
// pairStar("xxyy") → "x*xy*y"
// pairStar("aaaa") → "a*a*a*a"

string pairStar(string str)
{
    // base case
    if (str.size() < 2)
    {
        return str;
    }
    
    string star = "*";
    // check adjacent letters for matching
    if (str[0] == str[1])
    {
        // append char at index 0 + * and recursive call
        return str[0] + star + pairStar(str.substr(1));
    }
    // not matching -> append char at index 0 and recursice call
    return str[0] + pairStar(str.substr(1));
}

int main()
{
    cout << "Input hello : Expected hel*lo : Actual " << pairStar("hello") << endl;
    cout << "Input xxyy : Expected x*xy*y : Actual " << pairStar("xxyy") << endl;
    cout << "Input aaaa : Expected a*a*a*a : Actual " << pairStar("aaaa") << endl;
    cout << "Input aaab : Expected a*a*ab : Actual " << pairStar("aaab") << endl;
    cout << "Input aa : Expected a*a : Actual " << pairStar("aa") << endl;
    cout << "Input a : Expected a : Actual " << pairStar("a") << endl;
    cout << "Input \"\" : Expected \"\" : Actual " << pairStar("") << endl;
    cout << "Input noadjacent : Expected noadjacent : Actual " << pairStar("noadjacent") << endl;
    cout << "Input abba : Expected ab*ba : Actual " << pairStar("abba") << endl;
    cout << "Input abbba : Expected ab*b*ba : Actual " << pairStar("abbba") << endl;
}
