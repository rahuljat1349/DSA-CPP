#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == 'Q')
        {
            return false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}

void nQueens(vector<vector<string>> &ans, vector<string> &board, int n, int row)
{
    if (row == n)
    {
        ans.push_back({board});
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(board, row, i, n))
        {
            board[row][i] = 'Q';
            nQueens(ans, board, n, row + 1);
            board[row][i] = '.';
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.'));

    nQueens(ans, board, n, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (string col : ans[i])
        {
            cout << col << endl;
        }
        cout << "----------" << endl;
    }

    return 0;
}