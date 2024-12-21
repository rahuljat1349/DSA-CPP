#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// problem no. 769


int getMaxChunks(vector<int> &arr, vector<int> &currentChunk, vector<vector<int>> &ans)
{
    int maxVal = 0;
    int maxChunks = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        maxVal = max(maxVal, arr[i]);
        // currentChunk.push_back(arr[i]);

        if (maxVal == i)
        {
            // ans.push_back(currentChunk);
            // currentChunk.clear();
            maxChunks++;
        }
    }
    return maxChunks;
}

int main()
{

    vector<int> arr = {1, 0, 2, 3, 4};
    vector<int> currentChunk;
    vector<vector<int>> ans;

    int result = getMaxChunks(arr, currentChunk, ans);
    cout << result << endl;
    
    return 0;
}