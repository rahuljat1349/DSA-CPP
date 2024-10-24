#include <iostream>
using namespace std;

bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }

    return false;
}

bool checkPallindrom(string s)
{
    int st = 0, end = s.length() - 1;

    while (st < end)
    {
        if (
            // !isAlphaNum(s[st])    // custom function
            !isalnum(s[st]) // cpp stl function
        )
        {
            st++;
            continue;
        }
        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }

    return true;
}
//
void removeAllOccurencec(string &str, string substr)
{
    while (str.find(substr) < str.length())
    {
        str.erase(str.find(substr), substr.length());
    }
}
int main()
{

    //  check pallindrom
    string s = "Ac3?e3c&a";

    // cout << checkPallindrom(s) << endl;

    // remove all occurrences

    string str = "daabcbaabcbc", substr = "abc";

    removeAllOccurencec(str, substr);

    cout << str << endl;

    return 0;
}