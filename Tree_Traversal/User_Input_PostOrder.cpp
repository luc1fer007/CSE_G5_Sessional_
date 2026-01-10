#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void postOrder(Node *root, vector<int>&res)
{
    if(root == NULL)return;
    postOrder(root->left, res);
    postOrder(root->right, res);
    res.push_back(root->data);
}
Node *buildTree()
{
    int x;
    cin>>x;
    if(x == 0)return NULL;
    Node *root = new Node(x);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int main()
{
    Node *root = buildTree();
    vector<int>res;
    postOrder(root, res);
    for(int x : res)cout<<x<<" ";
    return 0;
}
