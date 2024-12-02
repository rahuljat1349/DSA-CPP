#include <iostream>
#include <vector>
using namespace std;
int calcFact(int n)
{
    if (n == 1)
        return n;

    return n * calcFact(n - 1);
}
//

//
int calcFibon(int n)
{
    if (n == 0 || n == 1)
        return n;

    return calcFibon(n - 1) + calcFibon(n - 2);
}
//

//

bool isSorted(vector<int> arr, int n)
{
    if (n == 0 || n == 1)
        return true;

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}
//

// binary search

int binarySearch(vector<int> arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == tar)
        {
            return mid;
        }
        else if (arr[mid] <= tar)
        {
            return binarySearch(arr, tar, mid + 1, end);
        }
        else
        {
            return binarySearch(arr, tar, st, mid - 1);
        }
    }
    return -1;
}

//

//

int main()
{
    // cout << calcFibon(5) << endl; // 8th term

    //
    vector<int> arr = {1, 2, 5, 8, 7};
    // int n = 5;
    // cout << isSorted(arr, n) << endl;

    // binary search
    int tar = 8, st = 0, end = 4;
    cout << binarySearch(arr, tar, st, end) << endl;
    return 0;



    
}