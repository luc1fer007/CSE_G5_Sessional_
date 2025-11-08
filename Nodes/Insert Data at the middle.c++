#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *address;
};
int main()
{
    node *head = nullptr;
    node *temp = nullptr;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i = 0 ; i< n ; ++i)
    {
        node *newNode = new node();
        cin>>newNode->data;
        newNode->address = nullptr;      //initially saved
        if(head == nullptr)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->address = newNode;  //temp got the address of newNode;
            temp = newNode;
        }
    }

    //inserting data at the middle
    //insert index;
    int idx;
    cout<<"Enter index";
    cin>>idx;
    //insert node value
    node *newMid = new node();
    cout<<"Enter data";
    cin>>newMid->data;

    temp = head;
    for(int i = 1 ; i < idx && temp != nullptr; i++)
    {
        temp = temp->address;
    }
    if(temp != nullptr)
    {
        newMid->address = temp->address;
        temp->address = newMid;
    }
    else
    {
        cout<<"Invalid position"<<'\n';
    }

    //printing nodes
    temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->address;
    }
    cout<<'\n';
    return 0;
}
