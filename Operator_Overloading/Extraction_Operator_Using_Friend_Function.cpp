/*Create a class Demo and declare two variables inside the class. Overload the extraction operator
">>" to read the inputs from the user and overload the insertion operator "<<" to print the values.
Code Implementation:*/
//if class members are private use friend function
#include<bits/stdc++.h>
using namespace std;

class demo
{
    private:
    int length, breadth;
    friend istream& operator>>(istream&in, demo &ob);
    friend ostream& operator<<(ostream&out, demo &ob);
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
int main()
{
    demo obj;
    cin>>obj;
    cout<<obj;
    return 0;
}
