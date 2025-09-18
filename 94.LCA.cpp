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

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->val == p->val || root->val == q->val)
    {
        return root;
    }

    Node *leftLca = lowestCommonAncestor(root->left, p, q);
    Node *rightLca = lowestCommonAncestor(root->right, p, q);

    if (leftLca && rightLca)
    {
        return root;
    }
    else if (leftLca != NULL)
    {
        return leftLca;
    }
    else
    {
        return rightLca;
    }
}
int main()
{
    vector<int> preOrder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

    Node *p = new Node(7);
    Node *q = new Node(3);

    Node *ans = lowestCommonAncestor(root, p, q);

    cout << ans->val << endl;

    return 0;
}