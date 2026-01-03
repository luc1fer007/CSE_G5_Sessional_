#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << "Not Prime" << endl;
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                count++;
        }
        if (count == 1)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not prime" << endl;
        }
    }
}

//More optimized code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        //for (int i = 2; i <= sqrt(n); i++) 
        for (int i = 2; (i*i) <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    (isPrime) ? cout << n << " is a prime number\n" : cout << n << " is not a prime number\n";
    return 0;
}
