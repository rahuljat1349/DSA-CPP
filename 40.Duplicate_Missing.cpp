#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> findDuplicateMissing(vector<vector<int>> grid)
{
    vector<int> ans;
    unordered_set<int> set;
    int n = grid.size();
    int a, b;
    int expSum = (n * n) * (n * n + 1) / 2;
    int actSum = 0;
    for (id_t i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actSum += grid[i][j];
            if (set.find(grid[i][j]) != set.end())
            {
                a = grid[i][j];
            }
            set.insert(grid[i][j]);
        }
    }
    b = expSum + a - actSum;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

//
//
//
//
//
//
//
int findDupicate(vector<int> arr) // O(n) space complexity
{

    unordered_set<int> set;
    for (int val : arr)
    {
        if (set.find(val) != set.end())
        {
            return val;
        }
        set.insert(val);
    }

    return -1;
}

//

//  slow fast pointer approach

int findDupicate2(vector<int> arr) // O(1) space complexity
{
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

//
//
//
//
//

//

//
//
//
//
int main()
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 9, 6}, {7, 8, 9}};

    // vector<int> ans = findDuplicateMissing(grid);

    // cout << "duplicate : " << ans[0] << endl
    //      << "missing : " << ans[1] << endl;

    vector<int> arr = {1, 2, 4, 4, 3}; // where arr is n+1 of size with 1 -> n values
    cout << findDupicate2(arr) << endl;

    return 0;
}