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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHight = height(root->left);
    int rightHight = height(root->right);

    return max(leftHight, rightHight) + 1;
}
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return (leftCount + rightCount) + 1;
}



Node *sum(Node *root)
{
    if (root == NULL)
    {
        return new Node(0);
    }

    Node *leftNode = sum(root->left);

    Node *rightNode = sum(root->right);

    return new Node(leftNode->val + rightNode->val + root->val);
}



int sum2(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = sum2(root->left);
    int rightCount = sum2(root->right);

    return leftCount + rightCount + root->val;
}



int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    cout << "Height : " << height(root) << endl;

    // Node *ans = sum(root);
    // cout << ans->val << endl;

    return 0;
}