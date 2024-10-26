#include <iostream>
#include <algorithm>
using namespace std;

string Reverse(string s)
{
    reverse(s.begin(), s.end());
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += ' ' + word;
        }
    }

    return ans.substr(1);
}
int main()
{
    string s = "string. reversed the is This";
    cout << Reverse(s) ;
    return 0;
}