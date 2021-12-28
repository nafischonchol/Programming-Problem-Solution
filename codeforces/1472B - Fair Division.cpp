#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long c[n+1],c1=0,c2=0;
        for(long long i=0;i<n;i++)
        {
            cin>>c[i];
            if(c[i]==1)
                c1=c1+1;
            else
                c2=c2+1;
        }
        long long cx2=c2*2;
        if(c1%2==0 && c2%2==0)
            cout<<"YES"<<endl;
        else if((c1+cx2)%2==0)
        {
            if(c1%2==0 && c2%2!=0 && c1!=0 )
                cout<<"YES"<<endl;
            else if(c1%2!=0 && c2%2==0 && c2!=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
        else
            cout<<"NO"<<endl;
        
        
    }
    return 0;
}
