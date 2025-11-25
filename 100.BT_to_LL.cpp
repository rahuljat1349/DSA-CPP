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


Node* lastVisited = NULL;

void flatten(Node* root){

    if(root == NULL){
        return;
    }

    flatten(root->right);
    flatten(root->left);

    root->left = NULL;
    root->right = lastVisited;
    lastVisited = root;

}


int main()
{
    // tree forming
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->right = new Node(5);

    // -------------------------------



     flatten(root);


    // testing

     while (root->right != NULL)
     {  
         cout << root->val << endl;
         root = root->right;
     }
    





    return 0;
}