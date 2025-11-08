/**
 *    author:  lucifer
 *    created: 2025.11.08 23:12:34
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
    fast_io;

    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 10;
    head->address = second;

    second->data = 20;
    second->address = third;

    third->data = 30;
    third->address = nullptr;

    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp -> address;
    }
    return 0;
}
