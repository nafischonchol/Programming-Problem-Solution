#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,s=0;
        int even=0,odd=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0)
                even++;
            else
                odd++;
            s=s+a;
 
        }
 
        if(s%2==0)
        {
            if(even>0 && odd>0)
            {
                cout<<"YES"<<endl;
 
            }
            else if (even==n)
                cout<<"NO"<<endl;
            else if(n%2!=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
 
 
 
        }
        else
            cout<<"YES"<<endl;
 
    }
 
 
    return 0;
}
