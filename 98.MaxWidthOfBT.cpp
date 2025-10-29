#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

int MaxWidth(Node *root)
{
    queue<pair<Node *, unsigned long long>> q;
    q.push({root, 0});
    int maxWidth = 0;
    while (q.size() > 0)
    {
        int currLevelSize = q.size();
        unsigned long long stIdx = q.front().second;
        unsigned long long endIdx = q.back().second;

        maxWidth = max(maxWidth, (int)(endIdx - stIdx + 1));
        for (int i = 0; i < currLevelSize; i++)
        {
            auto curr = q.front();
            q.pop();

            if (curr.first->left)
            {
                q.push({curr.first->left, curr.second * 2 + 1});
            }
            if (curr.first->right)
            {
                q.push({curr.first->right, curr.second * 2 + 2});
            }
        }
    }
    return maxWidth;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);

    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->right = new Node(9);

    // --------------------------------
    int maxWidth = MaxWidth(root);

    cout << "Max width of current binary tree is " << maxWidth << endl;
    return 0;
}