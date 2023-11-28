#include <iostream>
using namespace std;

class BST{
    public:
    int data;
    BST *left;
    BST *right;
};

void inorder(BST* root, int &count)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, count);

    // leaf node
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }

    inorder(root->right, count);
}

int main()
{
    BST* root = NULL;
    int cnt = 0;
    inorder(root, cnt);
    cout << cnt << endl; // print the count
    return 0; // return 0 to indicate successful execution
}