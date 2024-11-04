#include <iostream>
#include <vector>
using namespace std;

//

pair<int, int> linearSearch(int mat[][3], int rows, int cols, int key)
{
    pair<int, int> res = {-1, -1};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] == key)
            {
                res = {i, j};
            }
        }
    }
    return res;
}
//
//
int maxRowSum(int mat[][3], int rows, int cols)
{
    int maxSum = __WINT_MIN__;
    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += mat[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }
    return maxSum;
}
//

int maxColSum(int mat[][3], int rows, int cols)
{
    int maxSum = __WINT_MIN__;
    for (int i = 0; i < cols; i++)
    {
        int colSum = 0;
        for (int j = 0; j < rows; j++)
        {
            colSum += mat[j][i];
        }
        maxSum = max(maxSum, colSum);
    }
    return maxSum;
}
//

int pDiagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }
    return sum;
}
//

int sDiagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][n - i - 1];
    }
    return sum;
}
//

int aDiagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += mat[i][i];

        if (i != n - i - 1) // to avoid common values
        {
            sum += mat[i][n - i - 1];
        }
    }
    return sum;
}
//
//
int main()
{
    // 2D arrays
    int matrix[3][3] = {
        {1, 25, 3},
        {4, 10, 6},
        {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    // cout << matrix[2][1] << endl;

    //
    //
    //
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << matrix[i][j] << "  ";
    //     }

    //     cout << endl;
    // }

    // for (int i = 0; i < rows * cols; i++)
    // {
    //     cout << *(*matrix + i) << endl;
    // }

    // Linear Search
    // int key = 11;
    // pair<int, int> res = linearSearch(matrix, rows, cols, key);
    // cout << "Row - " << res.first << endl
    //      << "Col - " << res.second << endl;

    // Max Row Sum
    // cout << "max Row Sum is " << maxRowSum(matrix, rows, cols) << endl;
    // Max Col Sum
    // cout << "max Col Sum is " << maxColSum(matrix, rows, cols) << endl;
    // Diagonal Sum
    // cout << "primary diagonal Sum is " << pDiagonalSum(matrix, rows) << endl;
    // cout << "secondary diagonal Sum is " << sDiagonalSum(matrix, rows) << endl;

    // All diagonal's sum
    // cout << "all diagonal's Sum is " << aDiagonalSum(matrix, rows) << endl;

    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //
    //   2D vectors
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}