#include <bits/stdc++.h>
using namespace std;
int check(long long int am);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int L, R,i;
    cin >> L >> R;

    int check2 = 1;
    for(i = R ; i >= L ; i--){
        if(check(i)){
            cout<<i<<endl;check2 = 0;
            break;
        }
    
    }
    if(check2){
        cout<<-1<<'\n';
    }
    
}
int check(long long int value)
{
    if(value < 2) return 0;
    int check = 1;
    for(int j = 2 ; j*j <= value ;j++){
        if(!(value % j)){
            check = 0;
            break;
        }
    }
    if(check){
        return value;
    }
    return 0;
}
