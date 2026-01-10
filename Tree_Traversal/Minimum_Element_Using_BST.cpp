#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
public:
    node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
int inOrder(node *root, vector<int>&sorted_Vec)
{
    if(root == nullptr)return 0;
    inOrder(root->left, sorted_Vec);
    sorted_Vec.push_back(root->data);
    inOrder(root->right, sorted_Vec);
    return sorted_Vec.front();
}
int main()
{
    node *root = new node(9);
    root->left = new node(5);
    root->right = new node(10);
    root->left->left = new node(2);
    root->left->right = new node(7);
    root->right->left = new node(12);
    root->right->right = new node(13);

    vector<int>sorted_Vec;
    int res = inOrder(root, sorted_Vec);
    cout<<res<<endl;
    return 0;
}
