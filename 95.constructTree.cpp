#include <vector>
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

int search(vector<int> inorder, int val, int left, int right)
{
    for (int i = left; i <= right; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
        
    }
    return -1;
    
}

Node *buildTree(vector<int> preorder, vector<int> inorder, int &preIdx, int left, int right)
{
    if (left > right)
    {
        return nullptr;
    }
    Node* root = new Node(preorder[preIdx]);

    int inIdx = search(inorder, preorder[preIdx], left, right);
    preIdx++;

    root->left = buildTree(preorder, inorder, preIdx, left, inIdx-1);
    root->right = buildTree(preorder, inorder, preIdx, inIdx+1, right);

    return root;
    
}

int main()
{
    vector<int> preorder = {1, 2, 4, 5, 8, 9, 3, 6, 10, 11, 7, 12, 13};
    vector<int> inorder = {4, 2, 8, 5, 9, 1, 10, 6, 11, 3, 12, 7, 13};
    int preIdx = 0 ;  // passed by reference
    Node* root = buildTree(preorder, inorder, preIdx, 0, inorder.size()-1);

    cout << root->right->right->left->val << endl;
    return 0;
}
