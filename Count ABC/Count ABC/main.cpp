#include <iostream>
#include <string>
using namespace std;

// Count recursively the total number of "abc" and "aba" substrings that appear in the given string.

// countAbc("abc") → 1
// countAbc("abcxxabc") → 2
// countAbc("abaxxaba") → 2

int countAbc(string str)
{
    // base case
    if (str.size() < 3)
    {
        return 0;
    }
    
    if (str.substr(0, 3) == "abc" || str.substr(0, 3) == "aba")
    {
        return 1 + countAbc(str.substr(1));
    }
    return countAbc(str.substr(1));
}

int main()
{
    cout << "Input abc : Expected 1 : Actual " << countAbc("abc") << endl;
    cout << "Input abcxxabc : Expected 2 : Actual " << countAbc("abcxxabc") << endl;
    cout << "Input abaxxaba : Expected 2 : Actual " << countAbc("abaxxaba") << endl;
    cout << "Input ababc : Expected 2 : Actual " << countAbc("ababc") << endl;
    cout << "Input abxbc : Expected 0 : Actual " << countAbc("abxbc") << endl;
    cout << "Input aaabc : Expected 1 : Actual " << countAbc("aaabc") << endl;
    cout << "Input hello : Expected 0 : Actual " << countAbc("hello") << endl;
    cout << "Input \"\" : Expected 0 : Actual " << countAbc("") << endl;
    cout << "Input ab : Expected 0 : Actual " << countAbc("ab") << endl;
    cout << "Input aba : Expected 1 : Actual " << countAbc("aba") << endl;
    cout << "Input aca : Expected 0 : Actual " << countAbc("aca") << endl;
    cout << "Input aaa : Expected 0 : Actual " << countAbc("aaa") << endl;
}
