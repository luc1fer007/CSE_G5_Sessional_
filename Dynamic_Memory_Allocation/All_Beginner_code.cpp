#include <bits/stdc++.h>
using namespace std;
class Test
{
    int pointer;

public:
    Test(int n)
    {
        pointer = n;
    }
    void print()
    {
        cout << pointer << endl;
    }
};
int main()
{
    //Dynamic variable
    int *ptr;
    ptr = new int;
    cin >> *ptr;

    //Dynamic Array
    int *ptr2;
    ptr2 = new int[*ptr];
    for (int i = 0; i < *ptr; i++)
    {
        cin >> ptr2[i];
    }
    for (int i = 0; i < *ptr; i++)
    {
        cout << ptr2[i] << " ";
    }
    cout << endl;

    //Dynamic object from class
    Test *obj;
    obj = new Test(*ptr);
    (*obj).print();
    //obj->print(); //other ways to access
    delete ptr;
    delete ptr2;
    delete obj;
    cout << "complete" << endl;
    return 0;
}
