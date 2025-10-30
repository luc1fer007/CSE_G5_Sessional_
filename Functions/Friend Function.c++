#include <bits/stdc++.h>
using namespace std;

#define lucifer int main()

class Farhad
{
    // protected:
    // public:
    // private:              //same value

private:
    int a = 50;

    friend void seeValue(Farhad obj); // Declaring friend function u can access in privately and public
};
void seeValue(Farhad obj)
{
    cout << obj.a;
}

lucifer
{
    Farhad ob;
    seeValue(ob);

    return 0;
}
