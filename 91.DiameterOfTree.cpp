#include<iostream>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHight = height(root->left);
    int rightHight = height(root->right);
    return max(leftHight,rightHight)+1;
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftDiam = diameter(root->left);
    int rightDiam = diameter(root->right);
    int currDiam = height(root->left)+height(root->right);
    return max(currDiam, max(leftDiam, rightDiam));
}


int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<"Diameter of the tree is: "<<diameter(root)<<endl;


    
    return 0;
}