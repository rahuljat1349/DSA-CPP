#include <iostream>
#include <vector>
#include <queue>

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

void preOrderTraversal(Node *root) // root, left, right
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root) // left. root, right
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root) // left, right, root
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 0)
    {
        Node *curr = q.front();

        q.pop();

        if (curr == NULL)
        {
            if (!q.empty())
            {
                cout << endl;
                q.push(NULL);
                continue;
            }
            else
            {
                break;
            }
        }

        cout << curr->val << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node *root = buildTree(preOrder);

    levelOrderTraversal(root);
    return 0;
}