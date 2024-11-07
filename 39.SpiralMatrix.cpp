#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> mat)
{

    int m = mat.size(), n = mat[0].size();

    int srow = 0, scol = 0;
    int erow = m - 1, ecol = n - 1;
    vector<int> result;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int i = scol; i <= ecol; i++)
        {
            result.push_back(mat[srow][i]);
        }
        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            result.push_back(mat[i][ecol]);
        }
        // bottom
        for (int i = ecol - 1; i >= scol; i--)
        {
            if (srow == erow)
            {
                break;
            }

            result.push_back(mat[erow][i]);
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }

            result.push_back(mat[i][scol]);
        }

        scol++;
        ecol--;
        srow++;
        erow--;
    }

    return result;
}

int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    vector<int> ans = spiralOrder(mat);

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}