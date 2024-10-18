#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &A, int m, vector<int> &B, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] > B[j])
        {
            A[idx--] = A[i--];
        }
        else
        {

            A[idx--] = B[j--];
        }
    }
    while (j >= 0)
    {
        A[idx--] = B[j--];
    }
}
//
//
void print(vector<int> A)
{
    for (int i : A)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> B = {2, 3, 4};
    int n = 3;
    sort(A, m, B, n);
    print(A);
    return 0;
}