#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;

void getAllCombinations(vector<int> &arr, vector<vector<int>> &ans, vector<int> &combin, int idx, int tar)
{
    if (idx == arr.size() || tar < 0)
    {
        return;
    }
    if (tar == 0)
    {
        if (s.find(combin) == s.end())
        {
            ans.push_back(combin);
            s.insert(combin);
        }
    }

    combin.push_back(arr[idx]);

    getAllCombinations(arr, ans, combin, idx, tar - arr[idx]);
    getAllCombinations(arr, ans, combin, idx + 1, tar - arr[idx]);

    combin.pop_back();

    getAllCombinations(arr, ans, combin, idx + 1, tar);
}

int main()
{
    vector<int> arr = {2, 3, 5};
    vector<vector<int>> ans;
    vector<int> combin;
    int target = 8;
    int index = 0;

    getAllCombinations(arr, ans, combin, index, target);


    // print the ans
    for (auto arr : ans)
    {
        for (auto i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}