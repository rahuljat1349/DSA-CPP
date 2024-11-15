#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
///

// brute force way
vector<vector<int>> threeSum(vector<int> nums)
{
    vector<vector<int>> ans;
    set<vector<int>> s;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());

                    if (s.find(trip) == s.end())
                    {
                        ans.push_back(trip);
                        s.insert(trip);
                    }
                }
            }
        }
    }
    return ans;
}

//

//

//

//

vector<vector<int>> threeSum2(vector<int> nums)
{
    int n = nums.size();
    set<vector<int>> trips;
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        int tar = -nums[i];
        for (int j = i + 1; j < n; j++)
        {
            int third = tar - nums[j];
            if (s.find(third) != s.end())
            {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                trips.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(trips.begin(), trips.end());
    return ans;
}

//

//

//

//

//

// bets way -> 2 pointer approach

vector<vector<int>> threeSUM(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int j = i + 1, k = n - 1;
        while (j < k)
        {

            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
                while (j < k && nums[k] == nums[k + 1])
                {
                    k--;
                }
            }
        }
    }
    return ans;
}

//

//

//

//

//

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSUM(nums);
    cout << ans[1][0] << " " << ans[1][1] << " " << ans[1][2] << endl;
    return 0;
}