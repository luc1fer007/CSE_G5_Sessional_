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
// preOrder formula = root->left->right
void preOrder(Node *node, vector<int> &vec)
{
    if (node == nullptr)
    {
        return;
    }
    vec.push_back(node->data);  // root
    preOrder(node->left, vec);  // left
    preOrder(node->right, vec); // right
}

// 🔹 Added function for user input
Node* buildTree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node* root = new Node(x);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int main()
{
    // 🔹 User input tree
    Node* root = buildTree();

    // Dynamic array
    vector<int> vec;
    preOrder(root, vec);

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
