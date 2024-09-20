#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majElement(vector<int> nums)
{
    for (int val : nums)
    {
        int frec = 0;
        for (int ele : nums)
        {
            if (val == ele)
            {
                frec++;
            }
        }
        if (frec > nums.size() / 2)
        {
            return val;
        }
    }
}
//
//
//
//
//
int majElementOpt(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int frec = 1, n = nums.size();
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            frec++;
        }
        else
        {
            frec = 1;
        }

        if (frec > n / 2)
        {
            ans = nums[i];
        }
    }
    return ans;
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

int majElementOptMoore(vector<int> nums)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    // last step to check if there is majority element in given array..
    int count = 0;
    for (int val : nums)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {

        return ans;
    }
    return -1;

}

int main()
{

    //   majority element > n/2 times in an array
    //
    //
    // 1. Brute Force -
    vector<int> nums = {3, 2, 3, 1, 3, 2, 2, 2, 2};

    // cout << "majority element is : " << majElement(nums) << endl;
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
    // Optimized way   ->  sort the given array and then calculate every element's frequency.
    // if it is not > n/2, reset the frequency and recalculate it for next element.

    // cout << "majority element is : " << majElementOpt(nums) << endl;
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
    //
    //
    //
    //
    //     moore's voting algorithm -> most optimized way to find majority element.

    cout << "majority element is : " << majElementOptMoore(nums) << endl;

    return 0;
}