#include <iostream>
#include <vector>

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
    };
};

Node *Insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->val)
    {
        root->left = Insert(root->left, val);
    }
    else
    {
        root->right = Insert(root->right, val);
    }
    return root;
}

// Build Binary Search Tree
Node *BuildBST(vector<int> arr)
{
    Node *root = NULL;
    for (int x : arr)
    {
        root = Insert(root, x);
    }
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Search in Binary search Tree
bool search(Node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->val == key)
    {
        return true;
    }
    if (root->val > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

// ############## Delete Node ##############

Node *getInorderSuccessor(Node *root) {

        while (root != NULL && root->left != NULL)
        {
            root = root->left;
        }
        return root;

}

Node *delNode(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->val > key)
    {
        root->left = delNode(root->left, key);
    }
    else if (root->val < key)
    {
        root->right = delNode(root->right, key);
    }
    else
    {
        // root == key
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            // 2 children
            Node *IS = getInorderSuccessor(root->right);
            root->val = IS->val;
            root->right = delNode(root->right, IS->val);
        }
    }
    return root;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node *root = BuildBST(arr);

    // inorder(root);

    cout << search(root, 1) << endl;

    cout << "Before : ";
    inorder(root);
    cout << endl;

    root = delNode(root, 2);

    cout << "After : ";
    inorder(root);
    cout << endl;

    return 0;
}