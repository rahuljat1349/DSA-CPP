#include <iostream>
#include <vector>
using namespace std;

// Search in Roatated Sorted Array
int Search(vector<int> nums, int target)
{
    int st = 0, end = nums.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[st] <= nums[mid])
        {
            if (nums[st] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}
int main()
{
    // Ascending order; distinct values
    vector<int> nums = {1, 2, 3, 4, 5, 6, 1, 2, 3};
    int tar = 0;
    return 0;
}