# Binary Tree Algorithms (Inorder)

### Algorithm 1: BUILD_TREE
1.  Read: X.
2.  If X = 0, then :
        Return NULL.
    [End of if structure]
3.  Set ROOT := New Node.
4.  Set ROOT -> DATA := X.
5.  Set ROOT -> LEFT := Call BUILD_TREE().
6.  Set ROOT -> RIGHT := Call BUILD_TREE().
7.  Return ROOT.
8.  Exit.

### Algorithm 2: IN_ORDER(ROOT, RES)
1.  If ROOT = NULL, then :
        Return.
    [End of if structure]
2.  Call IN_ORDER(ROOT -> LEFT, RES).
3.  Add ROOT -> DATA to RES.
4.  Call IN_ORDER(ROOT -> RIGHT, RES).
5.  Exit.

### Algorithm 3: MAIN
1.  Set ROOT := Call BUILD_TREE().
2.  Set RES := Empty List.
3.  Call IN_ORDER(ROOT, RES).
4.  Set K := 1 and N := Size of RES.
5.  Repeat steps 6 and 7 while K <= N:
6.      Write: RES[K].
7.      Set K := K + 1.
8.  Exit.
    
//Code for InOrder
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
