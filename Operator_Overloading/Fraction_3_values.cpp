#include <bits/stdc++.h>
using namespace std;

class Frac
{
	int a, b, c;

public:
	Frac()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	void in()
	{
		cout << "Enter a: ";
		cin >> a;
		cout << "Enter b: ";
		cin >> b;
		cout << "Enter c: ";
		cin >> c;
	}
	Frac operator*(const Frac &res)
	{
		Frac temp;
		temp.a = a * res.a;
		temp.b = b * res.b;
		temp.c = c * res.c;
		return temp;
	}
	void out()
	{
		cout << "The fraction is: " << a << " / " << b << " / " << c;
	}
};
int main()
{
	Frac f1, f2, f3, result;
	f1.in();
	f2.in();
	f3.in();
	result = f1 * f2 * f3;
	result.out();
	return 0;
}
