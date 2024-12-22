#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int start, int mid, int end)
{
    int i = start, j = mid + 1;
    vector<int> temp;
    int count = 0;

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
            count += mid-i+1;
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
        arr[idx+start] = temp[idx];
    }

    return count;
}

int invCount(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        int leftCount = invCount(arr, start, mid);
        int rightCount = invCount(arr, mid + 1, end);

        int currCount = merge(arr, start, mid, end);

        return (currCount + leftCount + rightCount);
    }

    return 0;
}

int main()
{
    vector<int> arr = {6,3,5,2,7};
    int ans = invCount(arr, 0, arr.size()-1);
    cout << "Ans : "<< ans << endl;
    return 0;
}