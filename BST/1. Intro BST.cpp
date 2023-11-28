#include <iostream>
#include <queue>
using namespace std;

class BST
{
public:
    BST *left;
    BST *right;
    BST *parent;
    int data;

    BST(int value)
    {
        this->data = value;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
    }
};

void insert(BST *&root, int data)
{
    BST *temp = new BST(data);
    BST *top = root;
    BST *prev = NULL;
    int count = 0;
    while (top != NULL)
    {
        prev = top;
        count++;

        if (temp->data < top->data)
        {

            top = top->left;
        }
        else
        {

            top = top->right;
        }
    }

    if (temp->data < prev->data)
    {

        prev->left = temp;
    }

    else
    {

        prev->right = temp;
    }

    temp->parent = prev;
}


int height(BST *&root)
{
    int max_height;

    return max_height;
}

int size(BST *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return (size(root->left) + size(root->right)) + 1;
    }
}

void LevelOrder(BST *&root)
{
    queue<BST *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        BST *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {

            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void ReverseLevelOrder(BST* &root){

}

void Inorder(BST *&root)
{   
    if (root == NULL){
        return ;
    }
    
    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

void Preorder(BST *&root)
{   
    if (root == NULL){
        return ;
    }
    
    if (root != NULL)
    {
        cout << root->data << " ";
        Inorder(root->left);
        Inorder(root->right);
    }
}

void Postorder(BST *&root)
{   
    if (root == NULL){
        return ;
    }
    
    if (root != NULL)
    {
        Inorder(root->left);
        Inorder(root->right);
        cout << root->data << " ";
    }
}

void buildFromLevelOrder(BST* &root) {
    queue<BST*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new BST(data);
    
    q.push(root);

    while(!q.empty()) {
        BST* temp = q.front();
        q.pop();

        cout << "Enter left BST for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new BST(leftData);
            q.push(temp->left);
        }

        cout << "Enter right BST for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new BST(rightData);
            q.push(temp->right);
        }
    }
}


int main()
{
    BST *root = NULL;
    // BST *temp = new BST(10);
    // root = temp;

    // insert(root, 20);
    // insert(root, 5);
    // insert(root, 7);
    // insert(root, 0);
    // insert(root, 12);
    // insert(root, 40);

    buildFromLevelOrder(root);

    cout << "Inorder Traversal: " << endl;
    Inorder(root);
    cout << endl;

    cout << "Size of BST is: " << size(root) << endl;

    cout << "Level Order Traversal: " << endl;
    LevelOrder(root);

    cout << "Reverse Level Order Traversal: " << endl;
    ReverseLevelOrder(root);

    cout << "Inorder Traversal: " << endl;
    Inorder(root);
    cout << endl;

    cout << "Preorder Traversal: " << endl;
    Preorder(root);
    cout << endl;

    cout << "Postorder Traversal: " << endl;
    Postorder(root);
    cout << endl;
}