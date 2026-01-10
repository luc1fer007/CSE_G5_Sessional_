#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = nullptr;
    }
};
node *buildList()
{
    int x;
    cin>>x;
    if(x == 0)return nullptr;
    node *head = new node(x);
    head->next = buildList();
    return head;
}
int main()
{
    node *head = buildList();
    node *ptr = head;
    bool check = true;
    while(ptr!= NULL)
    {
        if(!check)cout<<" ";
        cout<<ptr->data;
        check = false;
        ptr = ptr->next;
    }
    return 0;
}
