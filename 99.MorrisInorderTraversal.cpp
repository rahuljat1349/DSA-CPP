#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

int main()
{

    // tree forming
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    // morris inorder traversal

    Node *curr = root;
    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            cout << curr->val << endl;
            curr = curr->right;
        }
        else
        {
            // find IP
            Node *ip = curr->left;
            while (ip->right != NULL && ip->right != curr)
            {
                ip = ip->right;
            }
            if (ip->right == NULL)
            {
                // create
                ip->right = curr;
                curr = curr->left;
            }
            else
            {
                // destroy
                ip->right = NULL;
                cout << curr->val << endl;
                curr = curr->right;
            }
        }
    }

    return 0;
}