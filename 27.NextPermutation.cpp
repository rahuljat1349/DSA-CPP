#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findNext(vector<int> &A)
{
    // find the pivot
    int pivot = -1, n = A.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            pivot = i;
            break;
        }
    }
    // edge case
    if (pivot == -1)
    {
        reverse(A.begin(), A.end());
        return;
    }

    // find next larger element

    for (int i = n - 1; i > pivot; i--)
    {
        if (A[i] > A[pivot])
        {
            swap(A[i], A[pivot]);
            break;
        }
    }

    // reverse piv+1 to n-1
    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        // reverse(A.begin() + pivot+1, A.end());
        swap(A[i++], A[j--]);
    }
}
//
//
//
//
//
//
//
//
void printArr(vector<int> A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> A = {1, 2, 3, 4};
    //
    findNext(A);
    // next_permutation(A.begin(), A.end());  // this is a standard function
    printArr(A);
    return 0;
}