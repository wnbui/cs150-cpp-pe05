#include <iostream>
#include <string>
using namespace std;

// Given a string, compute recursively a new string where all the adjacent chars are now separated by a
// "*".

// allStar("hello") → "h*e*l*l*o"
// allStar("abc") → "a*b*c"
// allStar("ab") → "a*b"

string allStar(string str)
{
    // base case
    if (str.size()  < 2)
    {
        return str;
    }
    
    // append char at 0 + * and recursive call
    string star = "*";
    return str[0] + star + allStar(str.substr(1));
}

int main()
{
    cout << "Input hello : Expected h*e*l*l*o : Actual " << allStar("hello") << endl;
    cout << "Input abc : Expected a*b*c : Actual " << allStar("abc") << endl;
    cout << "Input ab : Expected a*b : Actual " << allStar("ab") << endl;
    cout << "Input a : Expected a : Actual " << allStar("a") << endl;
    cout << "Input \"\" : Expected \"\" : Actual " << allStar("") << endl;
    cout << "Input 3.14 : Expected 3*.*1*4 : Actual " << allStar("3.14") << endl;
    cout << "Input Chocolate : Expected C*h*o*c*o*l*a*t*e : Actual " << allStar("Chocolate") << endl;
    cout << "Input 1234 : Expected 1*2*3*4 : Actual " << allStar("1234") << endl;
}
