#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while (t-- > 0)
    {
        int n, k; // n = size of array, k = number of left rotations
        cin >> n >> k;

        vector<long long> a(n); // store the necklace pearls
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // input each pearl's number
        }

        // If k > n, rotating more than n times is same as rotating k % n times
        k = k % n;

        // Now we print the rotated array
        for (int i = 0; i < n; i++)
        {
            // 
            
            // from the original array 'a' that should go to position i
            // Example:
            // Original: a = [1,2,3,4,5], n=5, k=2
            // i=0: a[(0+2)%5] = a[2] = 3 → first element after rotation
            // i=1: a[(1+2)%5] = a[3] = 4 → second element
            // i=2: a[(2+2)%5] = a[4] = 5 → third element
            // i=3: a[(3+2)%5] = a[0] = 1 → fourth element
            // i=4: a[(4+2)%5] = a[1] = 2 → fifth element
            cout << a[(i + k) % n] << " ";
        }

        cout << '\n'; // move to next line after each test case
    }
}




