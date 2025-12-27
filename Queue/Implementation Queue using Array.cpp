#include<bits/stdc++.h>
using namespace std;

struct myQueue{
    int *arr;
    int size;
    int capacity;
    
    myQueue(int x){
        capacity = x;
        arr = new int[capacity];
        size = 0;
    }
    bool isEmpty(){
        return size == 0;
    }
    bool isFull(){
        return size == capacity;
    }
    void enQueue(int p){
        if(isFull()){
            cout<<"Queue is Full"<<'\n';
            return;
        }
        arr[size] = p;
        size++;
    }
    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        for(int i = 1 ; i < size; i++){
            arr[i-1] = arr[i];
        }
        size--;
    }
    int getFront(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[0];
    }
    int getRear(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[size -1];
    }
};

int main(){
    myQueue q(3);
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    while(!q.isEmpty()){
        cout<<q.getFront()<<'\n';
        q.deQueue();
    }
}
