#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
        return ans;
    }
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
//
//
//
//
//
//
//
//

vector<int> twoPairSum(vector<int> nums, int target)
{
    vector<int> ansArr;
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum == target)
        {
            ansArr.push_back(i);
            ansArr.push_back(j);
            return ansArr;
        }
        if (sum < target)
        {
            i++;
        }
        if (sum > target)
        {
            j--;
        }
    }
}

int main()
{
    //
    //   Q: return pair in sorted array with target sum
    //
    //   int arr[] = {2,7,11,15}     target = 9
    //
    //  two pairs are - 2,7  2,11  2,15
    //                  7,11  7,15
    //                  11,15
    //
    //
    //
    // // Ex:-     (Brute Force)
    // vector <int> nums = {2,7,11,15};
    // int target = 13;

    // vector<int> ansArr = pairSum(nums,target);

    // cout << "Target Element's indices are : ";
    // cout << ansArr[0] << "," << ansArr[1];

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
    //
    //
    //
    //
    //
    //
    //
    //
    //  Optimized way  (2 pointers approach)
    // we know that array is already sorted, so, We can take advantage of this

    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ansArr = twoPairSum(nums, target);

    cout << "Target Element's indices are : ";
    cout << ansArr[0] << "," << ansArr[1];

    //
    //
    //
    //

    return 0;
}