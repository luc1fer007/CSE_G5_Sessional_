#include <bits/stdc++.h>
using namespace std;

class Name
{
	string s;
	string p;

public:
	Name()
	{
		s = "";
		p = "";
	}
	void in()
	{
		cout << "Enter your first name: ";
		cin >> s;                             //lucifer
		cout << "Enter your last name: ";
		cin >> p;                            //wick
	}
	Name operator+(const Name &F)
	{
		Name temp;
		temp.s = s + F.s;
		temp.p = p + F.p;
		return temp;
	}
	void out()
	{
		cout << "The full name is: " << s << " " << p << endl;
	}
};
int main()
{
	Name res, result;
	res.in();
	result = result + res;
	res.out();            //lucifer wick
	return 0;
}
