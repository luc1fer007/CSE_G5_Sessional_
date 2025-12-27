#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>p;
    for(int i = 1 ; i <= 5 ; i++){
        int x;
        cin>>x;
        p.push(x);
    }
    while(!p.empty()){
        cout<<p.front()<<' ';
        p.pop();
    }
}
