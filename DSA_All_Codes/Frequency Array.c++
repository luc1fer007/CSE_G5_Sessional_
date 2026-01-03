#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int freq[M + 1] = {0};       //initializing array and M+1 cause we need index from 1

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        freq[x]++;             //frequency element is increasing 
    }
    for (int i = 1; i <= M; i++)   //index from 1 to M
    {
        cout << freq[i] << endl;
    }
    return 0;
}

//Optimized code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> count; // sorted
    // unordered_map<int, int> count; //unSorted
    while (n --> 0)
    {
        int x;
        cin >> x;
        count[x]++;
    }
    for (auto p : count)
    {
        cout << p.first << " " << p.second << '\n';
    }
}
