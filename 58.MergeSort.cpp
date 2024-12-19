#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st+idx] = temp[idx];
    }
    
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, st, mid, end);
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1, 7, 9, 8};
    int st = 0;
    int end = arr.size() - 1;

    mergeSort(arr, st, end);

    for(auto val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}