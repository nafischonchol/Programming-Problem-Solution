#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(a==1 && b==1)
        {
            if(k%2==0)
                cout<<"0"<<endl;
            else
                cout<<"1"<<endl;
        }
        else
        {
            long long n=k/2;
            b=n*b;
            a=(k-n)*a;
            cout<<a-b<<endl;
        }
 
    }
    return 0;
}
