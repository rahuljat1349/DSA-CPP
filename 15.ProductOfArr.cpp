#include <iostream>
using namespace std;
#include <vector>

vector<int> product(vector<int> nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                product *= nums[j];
            }
        }
        ans.push_back(product);
    }

    return ans;
}
//
//
//
//
//
// vector<int> arrOfProduct(vector<int> nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     // prefix
//     vector<int> prefix(n, 1);
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i - 1] * nums[i - 1];
//     }
//     // suffix
//     vector<int> suffix(n, 1);
//     for (int i = n - 2; i >= 0; i--)
//     {
//         suffix[i] = suffix[i + 1] * nums[i + 1];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = prefix[i] * suffix[i];
//     }

//     return ans;
// }

//
//
//
//
//

// to optimize the space complexity
vector<int> arrOfProduct(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    // prefix
    // int prefix = 1;
    for (int i = 1; i < n; i++)
    {
        // prefix = prefix * nums[i - 1];
        // ans[i] = prefix;
        ans[i] = ans[i-1]*nums[i-1];
    }
    // suffix
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        // suffix = suffix * nums[i + 1];
        // ans[i] = ans[i] * suffix;
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }

    return ans;
}

int main()
{
    // Product of Array except itself
    // nums = [1,2,3,4]     ans = [24,12,8,6]

    // Brute Force
    vector<int> nums = {1, 2, 3, 4};
    // vector<int> ansArr = product(nums);
    // for (int i : ansArr)
    // {
    //     cout << i << " ";
    // }
    //
    //
    //
    // Optimal
    vector<int> ansArr = arrOfProduct(nums);
    for (int i : ansArr)
    {
        cout << i << " ";
    }

    return 0;
}