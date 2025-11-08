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

    //inserting at the begining
    node *newBegin = new node();
    cout<<"\nEnter data: ";
    cin>>newBegin->data;
    newBegin->address = head;
    head = newBegin;


    temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->address;
    }
    cout<<'\n';
    return 0;
}

