#include <iostream>
#include <vector>
using namespace std;
//
//
//
//
void printArr(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
}
//
//
//
//
//
void sort(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            swap(arr[low], arr[mid]);
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

//
//
//
//
//
int main()
{
    vector<int> arr = {1, 2, 0, 1, 1, 0, 2, 0, 0};
    sort(arr);
    printArr(arr);
    return 0;
}