/*Create a class Demo and declare two variables inside the class. Overload the extraction operator
">>" to read the inputs from the user and overload the insertion operator "<<" to print the values.
Code Implementation:*/
#include<bits/stdc++.h>
using namespace std;
class demo
{
public:
    int length, breadth;
};
istream& operator>>(istream& in, demo &ob)
{
    in>>ob.length>>ob.breadth;
    return in;
}
ostream& operator<<(ostream& out, demo &ob)
{
    out<<ob.length<<" "<<ob.breadth;
    return out;
}
int main()
{
    demo ob;
    cin>>ob;
    cout<<ob;
    return 0;
}
