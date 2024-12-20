#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int idx = start - 1, pivot = arr[end];
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void SortQuickly(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    
    int pivIdx = partition(arr, start, end);

    SortQuickly(arr, start, pivIdx - 1);
    SortQuickly(arr, pivIdx + 1, end);
}

int main()
{
    vector<int> arr = {2, 1, 4, 6, 5, 3};
    int start = 0, end = arr.size();

    SortQuickly(arr, start, end);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}