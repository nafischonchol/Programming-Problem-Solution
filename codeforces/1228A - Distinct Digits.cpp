#include<bits/stdc++.h>
using namespace std;
 
int dis(int x)
{
    int a[10]={0};
 
    while(x>0)
    {
        ++a[x%10];
        if(a[x%10] > 1)
        {
            return 0;
        }
        x=x/10;
    }
 
    return 1;
}
int main()
{
    int l,r,x;
    cin>>l>>r;
    x=l;
    while(x<=r)
    {
        if(dis(x)!=0)
        {
            cout<<x<<endl;
            return 0;
        }
 
        x++;
    }
    cout<<"-1"<<endl;
    return 0;
}
