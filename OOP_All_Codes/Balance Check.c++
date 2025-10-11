#include <bits/stdc++.h>
using namespace std;

class First
{
private:
    int Tk = 25000;

public:
    void setValue(int am)
    {
        if (Tk == am)
            cout << am << endl;
        else if (Tk > am)
        {
            cout << Tk - am << endl;
        }
        else
            cout << "Not much Money" << endl;
    }

    int getValue()
    {
        return Tk;
    }
};

int main()
{
    First obj;
    int am;

    cout << "Enter amount: ";
    cin >> am;

    obj.setValue(am);

    int cash = obj.getValue();
    cout << "Cash stored in object: " << cash << endl;

    return 0;
}