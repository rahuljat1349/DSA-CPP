#include <iostream>
#include <vector>
using namespace std;

void findWay(vector<vector<int>> &maze, int row, int col, vector<string> &ans, string path)
{
    int n = maze.size();
    if(row < 0 || col < 0 || row >= n || col >= n || maze[row][col] == 0){
        return;
    }

    if (row == n-1 && col == n-1)
    {
        ans.push_back(path);
        return;
    }

    maze[row][col] = 0;
    findWay(maze, row-1, col, ans, path+"U");
    findWay(maze, row+1, col, ans, path+"D");
    findWay(maze, row, col-1, ans, path+"L");
    findWay(maze, row, col+1, ans, path+"R");
    maze[row][col] = 1;

    
}

int main()
{
    vector<vector<int>> maze = {
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}};
    vector<string> ans;
    string path = "";
    findWay(maze, 0, 0, ans, path);

    for (auto way : ans)
    {
        cout << way << endl;
    }
    return 0;
}