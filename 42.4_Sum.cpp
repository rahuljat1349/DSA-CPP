#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//

//

vector<vector<int>> FourSum(vector<int> nums, int tar)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n;)
        {
            int p = j + 1, q = n - 1;
            while (p < q)
            {
                int sum = nums[i] + nums[j] + nums[p] + nums[q];
                if (sum > tar)
                {
                    q--;
                }
                else if (sum < tar)
                {
                    p++;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;

                    while (p < q && nums[p] == nums[p - 1])
                    {
                        p++;
                    }
                    while (p < q && nums[q] == nums[q + 1])
                    {
                        q--;
                    }
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1])
            {
                j++;
            }
        }
    }
    return ans;
}
//

//
int main()
{

    vector<int> nums = {-2, -1, -1, 1, 1, 2, 2};
    int target = 0;
    vector<vector<int>> ans = FourSum(nums, target);

    cout << ans[1][0] << ans[1][1] << ans[1][2] << ans[1][3] << endl;
    return 0;
}