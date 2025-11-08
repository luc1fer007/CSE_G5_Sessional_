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


    //insert data at the end;
    node *newEnd = new node();
    cout<<"Enter data: ";
    cin>>newEnd->data;

    temp = head;
    while(temp->address != nullptr)
    {
        temp = temp->address;
    }
    temp->address = newEnd;


    temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->address;
    }
    cout<<'\n';
    return 0;
}
