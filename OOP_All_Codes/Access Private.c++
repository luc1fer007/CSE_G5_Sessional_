#include<bits/stdc++.h>
using namespace std;
class Hello{
    private:                 //can be access withing class
    string cfHandle = "SBK";
    int pass = 1234;
    public:                  //helps to modify private class 
    void set(string st,int newPass){
        if(newPass == pass){
            cfHandle = st;
        }
        else cout<<"Password not matched"<<endl;
    }
    void get(){
        cout<<cfHandle<<endl;
    }
};
int main(){
    Hello obj;
    obj.get();
    obj.set("lucifer",1234);
    obj.get();
    return 0;

}
