#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "lucifer gonna win for sure\nHe is a champ\n";
    string p;
    ofstream out("sample.txt");
    out << s;
    if(out)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    out.close();

    ifstream in("sample2.txt");
    getline(in, p);
    getline(in, p);
    cout << p << endl;
    in.close();

    ifstream in2("sample3.txt");
    if(in2)cout<<"success"<<endl;
    else cout<<"NO"<<endl;
    for(int i = 1 ; i <= 6 ; i++)
    {
        in2>>i;
        cout<<i<<" ";
    }
    cout<<'\n';
    in2.close();

    fstream file;
    file.open("sample4.txt", ios::out | ios::in);
    string str;
    cin>>str;
    file<<str;
    file.flush();
    file.seekg(0);
    
    string st;
    while((getline(file, st)))
    {
        cout<<st<<endl;
    }
}
