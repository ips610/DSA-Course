int height(struct Node *node)
{
    // code here
    if (node == NULL)
    {
        return 0;
    }

    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left, right) + 1;

    return ans;
}

int diameter(struct Node *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int d1 = diameter(root->left);
    int d2 = diamter(root->right);
    int d3 = height(root->left) + height(root->right) + 1;

    int ans = max(d1, d2, d3);
    return ans;
}

pair<int, int> diameterFast(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int d1 = left.first;
    int d2 = right.first;
    int d3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first(max(op1, max(op2, op3));)
    return ans;
}