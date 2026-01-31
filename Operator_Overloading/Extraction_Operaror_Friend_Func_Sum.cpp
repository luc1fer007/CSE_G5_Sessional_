#include<bits/stdc++.h>
using namespace std;

class demo
{
    int length, breadth;
    friend istream& operator>>(istream&in, demo &ob);
    friend ostream& operator<<(ostream&out, demo &ob);
    friend demo operator+(demo a, demo b);
};
istream& operator>>(istream&in, demo &ob)
{
    in>>ob.length>>ob.breadth;
    return in;
}
ostream& operator<<(ostream&out, demo &ob)
{
    out<<ob.length<<" "<<ob.breadth;
    return out;
}
demo operator+(demo a, demo b)
{
    demo temp;
    temp.length = a.length + b.length;
    temp.breadth = a.breadth + b.breadth;
    return temp;
}
int main()
{
    demo obj1, obj2, obj3;
    cin>>obj1;
    cin>>obj2;
    obj3 = obj1 + obj2;
    cout<<obj3;
    return 0;
}
