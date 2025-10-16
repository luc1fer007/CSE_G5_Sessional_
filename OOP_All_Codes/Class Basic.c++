#include<bits/stdc++.h>
using namespace std;
class Hello{
    private:
    int num = 10;
    public:
    void setValue(int a){
        num = a;
    }
    void getValue(){
        cout<<num<<endl;
    }
};
int main(){
    Hello abc;
    abc.getValue();
    abc.setValue(70);
    abc.getValue();
    return 0;

}
