#include <vector>
#include <queue>
#include <map>
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


void KthLevel(Node* root, int k)
{
    if (root == NULL)
    {
        return; 
    }
    if (k == 1)
    {
        cout << root->val << " ";
        return;
    }
    
    KthLevel(root->left, k-1);
    KthLevel(root->right, k-1);   
}


int main()
{
    vector<int> preOrder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

   
    KthLevel(root, 3);



    return 0;
}