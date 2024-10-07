#include <iostream>
#include <vector>
using namespace std;

int Search(vector<int> nums)
{
    int st = 1, end = nums.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid-1] < nums[mid] && nums[mid]> nums[mid+1])
        {
            return nums[mid];
        }
        if (nums[mid-1] < nums[mid])
        {
            st = mid+1;
        }else{
            end = mid-1;    
        }          
    }

}
int main()
{
    // Peak Index in mountain Array
    //
    // if "p" is the peak peak value at some index then Arr[p-1] < p > Arr[p+1]
    //
    // Brute Force is Linear Search
    vector<int> Arr = {0, 2, 3, 8, 9,12, 5, 2};
    cout<< "Answer is "<< Search(Arr) << endl;
    return 0;
}