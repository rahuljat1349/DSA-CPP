#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> nums, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    return sum;
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
bool isValid(vector<int> nums, int n, int m, int maxAllowed)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > maxAllowed)
        {
            return false;
        }
        if (nums[i] + time <= maxAllowed)
        {
            time += nums[i];
        }
        else
        {
            painters++;
            time = nums[i];
        }
    }
    return painters > m ? false : true;
}
//
//
//
//
int Search(vector<int> nums, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int st = 0, end = sum(nums, n);
    int ans = 0;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(nums, n, m, mid))
        {
            ans = mid;
            end = mid - 1;    // to find smallest answer
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

//
//
//
//
int main()
{

    vector<int> nums = {1, 2, 3, 4};
    int n = 4, m = 2;
    cout << "Answer is " << Search(nums, n, m) << endl;
    return 0;
}