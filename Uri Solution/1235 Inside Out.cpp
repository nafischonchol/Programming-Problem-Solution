#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    getchar(); 
    while(t--)
    {
        string s;
        int sz=0,md=0;
        getline(cin,s);
        // cin>>s;
        sz=s.size()-1;
        md=sz/2;
        for(int i=md;i>=0;i--)
        {
            cout<<s[i];
        }
        for(int i=sz;i>md;i--)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;   
}
