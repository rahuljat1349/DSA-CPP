#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateAns(vector<int> arr)
{
    int n = arr.size();
    int ans = 0;
    vector<int> lmax(n, 0);
    vector<int> rmax(n, 0);

    lmax[0] = arr[0];
    rmax[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(lmax[i + 1], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans += min(lmax[i], rmax[i]) - arr[i];
    }

    return ans;
}

int calculateAns2(vector<int> arr)  // optimal
{
    int n = arr.size();
    int l = 0, r = n - 1;
    int ans = 0;
    int lmax = 0, rmax = 0;

    while (l < r)
    {
        lmax = max(lmax, arr[l]);
        rmax = max(rmax, arr[r]);

        if (rmax < lmax)
        {
            ans += rmax - arr[r];
            r--;
        }
        else
        {
            ans += lmax - arr[l];
            l++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 2, 0, 3, 2, 5};

    cout << calculateAns(arr) << endl;
    return 0;
}