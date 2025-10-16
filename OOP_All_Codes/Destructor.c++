//using destructor
//exact name as class
//no return type
//no parameter

#include<bits/stdc++.h>
using namespace std;
class Hello{
    public:
    Hello(){
        cout<<"Hi"<<endl;
    }
    void sum(int a, int b){
        cout<<a+b<<endl;
    }
    ~Hello(){
        cout<<"Destructor Complete"<<endl;
    }
};

int main(){
    Hello obj;
    obj.sum(7,6);
    return 0;
}
