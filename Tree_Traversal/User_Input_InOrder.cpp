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
        left = right = nullptr;
    };
};
void inOrder(Node *root, vector<int>&res)
{
    if(root == nullptr)return;
    inOrder(root->left, res);
    res.push_back(root->data);
    inOrder(root->right, res);
}
Node *buildTree()
{
    int x;
    cin>>x;
    if(x == -1)
    {
        return nullptr;
    }
    Node *root = new Node(x);
    root->left = buildTree();
    root->right = buildTree();

    return root;

}
int main()
{
    Node *root = buildTree();
    vector<int>res;
    inOrder(root, res);
    for(int c : res)cout<<c<<" ";
    return 0;
}
