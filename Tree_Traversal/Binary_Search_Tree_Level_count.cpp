#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = nullptr;
    }
};
bool search_(node *root, vector<int>&res, int &steps, int key)
{
    if(root == NULL)return false;
    steps++;
    if(root->data == key)return true;
    if(key > root->data)
    {
        return search_(root->right, res, steps,key);
    }
    else return search_(root->left, res, steps,key);
}
int main()
{
    node *root = new node(9);
    root->left =  new node(5);      // < 9
    root->right = new node(12);     // > 9

    root->left->left = new node(2); // < 5
    root->left->right = new node(7);// > 5

    root->right->left = new node(10); // < 12
    root->right->right = new node(13);// > 12

    vector<int>res;
    int key;
    cin>>key;
    int steps = 0;
    if(search_(root, res,steps,key))
    {
        cout<<"found "<<"step is : " << steps - 1 <<endl;
    }
    else cout<<"not found"<<endl;
    return 0;
}

