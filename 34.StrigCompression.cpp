#include <iostream>
#include <vector>
using namespace std;
int Compress(vector<char> &chars)
{
    int idx = 0;
    int n = chars.size();

    for (int i = 0; i < n;)
    {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
    }
    chars.resize(idx);

    return idx;
}
int main()
{
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'b', 'b', 'c', 'c'};
    Compress(chars);
    for (char ch : chars)
    {

        cout << ch << " ";
    }
    cout << endl;
    return 0;
}