/**
 *    author:  lucifer
 *    created: 2025.11.08 23:26:25
 *    motto:   Why so serious?❄️
 **/

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define ll long long int
#define sh short int
#define endl '\n'
#define lucifer int main()
struct node
{
    int data;
    node *address;
};
lucifer
{
    //fast_io; //don't use that

    // number of nodes
    int n;
    cin >> n;

    node *head = nullptr;
    node *temp = nullptr;

    for (int i = 0; i < n; i++)
    {
        node *newNodes = new node();
        cout << "Enter data" << i + 1 << ": ";
        cin >> newNodes->data;
        newNodes->address = nullptr;

        if (head == nullptr)
        {
            head = newNodes;
            temp = head;
        }
        else
        {
            temp->address = newNodes;
            temp = newNodes;
        }
    }
    temp = head;
    cout<<"linked list: ";
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->address;
    }
    cout<<'\n';
    return 0;
}
