#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node *buildTree(vector<int> preOrder)
{
    idx++;
    if (preOrder[idx] == -1)
    {
        return NULL;
    }

    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);

    return root;
}

int sumTree(Node *root) {
     if (root == NULL)
     {
        return 0;
     }
     int leftSum = sumTree(root->left);
     int rightSum = sumTree(root->right);
     root->val += leftSum + rightSum;

     return root->val;

}

int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

    cout << sumTree(root) << endl;

    return 0;
}