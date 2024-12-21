#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// problem no. 2872

int DFS(int node, int parent, vector<bool> &visited, vector<vector<int>> &adj, int &components, vector<int> &values, int k)
{
    visited[node] = true;
    // cout << "visiting Node : " << node << endl;
    int sum = values[node];

    for (auto neighbor : adj[node])
    {
        if (neighbor != parent
        //  && !visited[neighbor]
         )
        {
            sum += DFS(neighbor, node, visited, adj, components, values, k);
            sum %= k; // to handle large sums and prevent overflow.
        }
    }

    if (sum % k == 0)
    {
        components++;
        return 0;
    }

    return sum;
}

int maxComponents(vector<vector<int>> arr, int n, vector<int> &values, int k)
{
    vector<vector<int>> adj(n);
    for (const auto &edge : arr)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    vector<bool> visited(n, false);
    int components = 0;

    DFS(0, -1, visited, adj, components, values, k);

    return components;
}

int main()
{
    // vector<vector<int>> arr = {{0, 2}, {1, 2}, {1, 3}, {2, 4}};
    // vector<int> values = {1, 8, 1, 4, 4};
    // int k = 6;
    // int n = 5;
    //
    //
    vector<vector<int>> arr = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}};
    vector<int> values = {3, 0, 6, 1, 5, 2, 1};
    int k = 3;
    int n = 7;

    int ans = maxComponents(arr, n, values, k);

    cout << ans << endl;
    return 0;
}