#include<bits/stdc++.h>
using namespace std;
class Hello{
    public:
    int a,b;
    Hello(){
        cout<<"Hi"<<endl;
    }
    void sum(int a, int b){
        cout<<a+b<<endl;
    }
    Hello(const Hello &obj){
        a = obj.a;
        b = obj.b;
    }
};

int main(){
    Hello obj;
    obj.sum(7,6);

    Hello obj2(obj);
    return 0;
}
