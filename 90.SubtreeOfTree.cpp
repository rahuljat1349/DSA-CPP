#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int data)
    {
        val = data;
        left = right = NULL;
    }
};

bool isIdentical(Node *p, Node *q)
{
    if (p == NULL || q == NULL)
    {
        return p == q;
    }
    bool isLeftSame = isIdentical(p->left, q->left);
    bool isRightSame = isIdentical(p->right, q->right);
    return isLeftSame && isRightSame && p->val == q->val;
}
bool isSubtree(Node *root, Node *subroot)
{
    if (root == NULL || subroot == NULL)
    {
        return root == subroot;
    }

    if (root->val == subroot->val && isIdentical(root, subroot))
    {
        return true;
    }

    return isSubtree(root->left, subroot) || isSubtree(root->right, subroot);
}

int main()
{

    Node *tree = new Node(1);
    tree->left = new Node(2);
    tree->right = new Node(3);
    tree->right->left = new Node(4);
    tree->right->right = new Node(5);

    Node *subtree = new Node(3);
    subtree->left = new Node(4);
    subtree->right = new Node(5);
    return 0;
}