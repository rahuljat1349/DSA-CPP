#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node
{

public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->val = data;
        this->right = this->left = NULL;
    }
};
// --------------------------------------

void allPaths(Node *root, string path, vector<string> &ans)
{
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(path);
        return;
    }

    if (root->right)
    {
        allPaths(root->right, path + "->" + to_string(root->right->val), ans);
    }

    if (root->left)
    {
        allPaths(root->left, path + "->" + to_string(root->left->val), ans);
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);

    // ----------------------------------

    vector<string> ans;
    string path = to_string(root->val);

    allPaths(root, path, ans);


    for(auto str: ans){
        cout << str << endl;
    }


    return 0;
}