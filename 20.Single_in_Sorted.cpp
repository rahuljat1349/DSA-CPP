#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int> nums)
{
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid - 1])
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
            if (nums[mid] == nums[mid - 1])
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
    // every element in sorted array appears twice except one, find that
    // approach -> because we know that it will be always an odd array
    // after finding mid, we can check either it is equal to it's left element or the right
    // if it is equal to left, that means now left array has odd numbers that means that single
    // element exist in left array.
    vector<int> arr = {1, 1, 2,2, 3, 3, 4, 4, 7,9, 7, 8, 8};
    cout << "Answer is " << Search(arr) << endl;
    return 0;
}