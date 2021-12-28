#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,c=0,z=0;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()==n)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='n')
                c++;
            else if(s[i]=='z')
                z++;
        }
        for(int i=0;i<c;i++)
            cout<<"1 ";
        for(int i=0;i<z;i++)
            cout<<"0 ";
        cout<<endl;
    }
    return 0;
}
