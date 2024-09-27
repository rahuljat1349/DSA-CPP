#include <iostream>
using namespace std;
#include <vector>

int BinarySearch(vector<int> arr, int tar)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        // int mid = (st + end) / 2;
        int mid = st + (end - st) / 2; // to get rid of int overflow
        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
//
//
// Binary search with recursion
int BS(vector<int> arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            return BS(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return BS(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    // Binary search applies on only sorted strings or array.

    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12, 14};
    int target = 13;
    // cout << BinarySearch(arr, target) << endl;
    //
    //
    // With recursion --
    int st = 0, end = arr.size() - 1;
    cout << BS(arr, target, st, end) << endl;

    return 0;
}