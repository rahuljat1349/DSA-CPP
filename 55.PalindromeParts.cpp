#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalin(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());

    return s == s2;
}

void getAllParts(string s, vector<string> &parts, vector<vector<string>> &ans)
{
    if (s.size() == 0)
    {
        ans.push_back(parts);
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string str = s.substr(0, i + 1);
        if (isPalin(str))
        {
            parts.push_back(str);
            getAllParts(s.substr(i + 1), parts, ans);
            parts.pop_back();
        }
    }
}

int main()
{

    string s = "aaba";
    vector<string> parts;
    vector<vector<string>> ans;
    getAllParts(s, parts, ans);

    for (auto parts : ans)
    {
        for (auto key : parts)
        {
            cout << key << ", ";
        }
        cout << endl;
    }
    return 0;
}