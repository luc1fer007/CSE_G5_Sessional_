/*Create a class "Distance" that holds the length and breadth of a rectangle. Take the
input of the length and breadth of two rectangles into two objects. Overload the operator "-" to
store the difference of the length and breadth of the two rectangles into a third object.*/
#include<bits/stdc++.h>
using namespace std;

class Distance
{
private:
    int length;
    int breadth;
public:
    Distance()
    {
        length = 0;
        breadth = 0;
    };
    void in()
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    Distance operator-(Distance obj)
    {
        Distance temp;
        temp.length = length - obj.length;
        temp.breadth = breadth - obj.breadth;
        return temp;
    }
    void out()
    {
        cout<<"The result is: " << length << ' ' << breadth << endl;
    }
};

int main()
{
    Distance res1, res2, result;
    res1.in();
    res2.in();
    result = res1 - res2;
    result.out();
    return 0;
}
