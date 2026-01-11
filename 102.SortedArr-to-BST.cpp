#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int val;
    Node(int data)
    {
        val = data;
        left = right = NULL;
    }
};

Node *BuildBST(vector<int> nums, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = start + (end - start) / 2;
    Node *root = new Node(nums[mid]);
    root->left = BuildBST(nums, start, mid - 1);
    root->right = BuildBST(nums, mid + 1, end);

    return root;
}

int main()
{
    vector<int> nums = {-10, -5, 3, 5, 7, 9, 11};

    Node *root = BuildBST(nums, 0, nums.size() - 1);

    return 0;
}