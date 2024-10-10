#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//
//
void printArr(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
//
void BubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
//
//
void SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int smallestIdx = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallestIdx] > arr[j])
            {
                smallestIdx = j;
            }

            swap(arr[smallestIdx], arr[i]);
        }
    }
}

//
//
//
void InsertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int prev = i - 1, cur = arr[i];

        while (prev >= 0 && cur < arr[prev])
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = cur;
    }
}

int main()
{

    vector<int> Arr = {5, 2, 4, 3, 1};
    int n = 5;

    InsertionSort(Arr, n);
    printArr(Arr);
    return 0;
}