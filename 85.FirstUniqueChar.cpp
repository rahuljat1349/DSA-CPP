#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

int findUniqueChar(string s)
{
    unordered_map<char, int> m;
    queue<int> q;
    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            q.push(i);
        }
        m[s[i]]++;
        while (q.size() > 0 && m[s[q.front()]] > 1)
        {
            q.pop();
        }
    }
    return q.empty() ? -1 : q.front();
}

int main()
{
    string s = "level";
    int ans = findUniqueChar(s);
    cout << s[ans] << endl;
    return 0;
}