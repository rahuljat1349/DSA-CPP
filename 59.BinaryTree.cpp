#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
  
// problem no. 2415

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {};
};

Node *makeTree(vector<int> arr, int idx)
{
    if (idx >= arr.size())
    {
        return nullptr;
    }
    Node *node = new Node(arr[idx]);
    node->left = makeTree(arr, 2 * idx + 1);
    node->right = makeTree(arr, 2 * idx + 2);

    return node;
}

void traverse(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->val << " ";
    traverse(root->left);
    traverse(root->right);
}
//
//
//
// Q: swap every odd level children value..

void swapOddLevel(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int level = 0;

    while (!q.empty())
    {
        int levelSize = q.size();
        vector<Node *> currentLevelNodes;

        for (int i = 0; i < levelSize; i++)
        {
            Node *currentNode = q.front();
            q.pop();

            currentLevelNodes.push_back(currentNode);
            if (currentNode->left)
            {
                q.push(currentNode->left);
            }
            if (currentNode->right)
            {
                q.push(currentNode->right);
            }
        }

        if (level % 2 == 1)
        {
            int start = 0;
            int end = currentLevelNodes.size() - 1;

            while (start < end)
            {
                swap(currentLevelNodes[start]->val, currentLevelNodes[end]->val);
                start++;
                end--;
            }
        }
        level++;
    }
}

int main()
{
    vector<int> arr = {2, 3, 5, 8, 13, 21, 34};
    Node *root = makeTree(arr, 0);

    // swapOddLevel(root);

    traverse(root);
    return 0;
}