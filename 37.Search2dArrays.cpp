#include <iostream>
#include <vector>
using namespace std;
bool searchInRow(vector<vector<int>> mat, int target, int row)
{
    int n = mat[0].size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
//
//
//
bool searchInMatrix(vector<vector<int>> mat, int target)                           // !more optimized 
{
    int m = mat.size(), n = mat[0].size();
    int startrow = 0, endRow = m - 1;
    while (startrow <= endRow)
    {
        int midRow = startrow + (endRow - startrow) / 2;
        if (target >= mat[midRow][0] && target <= mat[midRow][n - 1])
        {
            return searchInRow(mat, target, midRow);
        }
        else if (target > mat[midRow][n - 1])
        {
            startrow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;
}
//
//
//
bool searchInMatrix2(vector<vector<int>> mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (target == mat[r][c])
        {
            return true;
        }
        else if (target > mat[r][c])
        {
            r++;
        }
        else
        {
            c--;
        }
    }
    return false;
}
int main()
{
    // ! Condition -> matrix must be in non-decreasing order
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 15, 16},
        {17, 28, 39}};
    int target = 28;
    cout << searchInMatrix(matrix, target) << endl;  //? More optimized for the perticular condition
    //
    //
    //
    // ! Condition -> matrix is increasing from left to right and top to bottom
    vector<vector<int>> matrix2 = {
        {1, 2, 4},
        {3, 5, 7},
        {6, 8, 9}};
    int target2 = 8;
    cout << searchInMatrix2(matrix2, target2) << endl;  //? it also works on first condition
    return 0;
}