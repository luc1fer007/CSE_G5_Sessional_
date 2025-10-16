//using parameter in constructor
#include<bits/stdc++.h>
using namespace std;
class Hello{
    public:
    int a, b;
    Hello(int x, int y){ //passing parameters
        a = x;
        b = y;
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    Hello obj(4,5);     //passing arguments
    return 0;
}
