#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
// using recursion every node have to pass 4 functions;
// postOrder formula = left->right->root;
void postOrder(Node *node, vector<int> &vec)
{
    if (node == nullptr)
    {
        return;
    }
    postOrder(node->left, vec);  // left
    postOrder(node->right, vec); // right
    vec.push_back(node->data);   // root
}

int main()
{
    Node *root = new Node(14);
    // left
    root->left = new Node(50);
    root->left->left = new Node(60);
    root->left->left->left = new Node(70);

    // right
    root->right = new Node(80);
    root->right->right = new Node(90);
    root->right->right->right = new Node(100);

    // Dynamic array
    vector<int> vec;
    postOrder(root, vec);
    bool check = true;
    for (int node : vec)
    {
        if (!check)
        {
            cout << " ";
        }
        cout << node;
        check = false;
    }
    cout << endl;
    return 0;
}
