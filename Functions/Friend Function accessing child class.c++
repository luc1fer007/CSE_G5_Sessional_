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
    cout << obj.a <<'\n';
}
class child: public Farhad{
    public:
    void see_a(Farhad obj){
        seeValue(obj);
    }
};

lucifer
{
    Farhad ob;
    seeValue(ob);
    //accessing child class
    child ob2;
    ob2.see_a(ob);

    return 0;
}
