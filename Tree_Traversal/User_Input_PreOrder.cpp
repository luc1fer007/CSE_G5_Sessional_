# Binary Tree Algorithms

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

### Algorithm 2: PRE_ORDER(ROOT, RES)
1.  If ROOT = NULL, then :
        Return.
    [End of if structure]
2.  Add ROOT -> DATA to RES.
3.  Call PRE_ORDER(ROOT -> LEFT, RES).
4.  Call PRE_ORDER(ROOT -> RIGHT, RES).
5.  Exit.

### Algorithm 3: MAIN
1.  Set ROOT := Call BUILD_TREE().
2.  Set RES := Empty List.
3.  Call PRE_ORDER(ROOT, RES).
4.  Set K := 1 and N := Size of RES.
5.  Repeat steps 6 and 7 while K <= N:
6.      Write: RES[K].
7.      Set K := K + 1.
8.  Exit.

//Code of PreOrder
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
