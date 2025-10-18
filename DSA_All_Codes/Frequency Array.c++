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
