#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long w,h,n,wn=0,hn=0,wr=1,hr=1;
        cin>>w>>h>>n;
        while(w%2==0)
        {
            wn=wn+1;
            w=w/2;
        }
        while(h%2==0)
        {
            hn=hn+1;
            h=h/2;
        }
        if(wn!=0)
            wr=pow(2,wn);
        if(hn!=0)
            hr=pow(2,hn);
        long long r=wr*hr;
        
        
        if(r>=n || n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
    }
    return 0;
}
