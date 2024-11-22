#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//
//  BrurteForce approach
int calculateSum(vector<int> arr, int tar)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == tar)
                count++;
        }
    }
    return count;
}
//

int prefixSum(vector<int> arr, int tar)
{
    int n = arr.size();
    int count = 0;
    vector<int> ps(n, 0);
    ps[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }

    unordered_map<int, int> m;

    for (int j = 0; j < n; j++)
    {
        if (ps[j] == tar)
        {
            count++;
        }

        int val = ps[j] - tar;

        if (m.find(val) != m.end())
        {
            count += m[val];
        }

        if (m.find(ps[j]) == m.end())
        {
            m[ps[j]] = 0;
        }
        m[ps[j]]++;
    }
    return count;
}
//
int main()
{

    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int tar = 33;
    int res = prefixSum(arr, tar);

    cout << res << endl;
    return 0;
}