#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a;
        long long s=0;
        double r,x;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s=s+a;
        }
        r=(double)s/n;
 
        x=(int)r;
 
        if(x==r)
            cout<<(int)x<<endl;
        else
            cout<<(int)x+1<<endl;
 
    }
 
    return 0;
}
