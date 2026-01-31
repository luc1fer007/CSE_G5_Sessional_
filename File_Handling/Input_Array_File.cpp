#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample.txt");
    string s = "Array is loading: ";
    out<<s;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1  ; i <= n ; i++)
    {
        cin>>arr[i];
        out<<arr[i]<<" ";
    }
    out.close();

    ifstream in("sample.txt");
    string p;
    getline(in, p);
    cout<<p<<endl;
    in.close();

    in.open("sample.txt");
    in.clear();
    string skip;
    in>>skip>>skip>>skip;
    for(int i = 1 ; i <= n ; i++)
    {
        in>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    in.close();
}
