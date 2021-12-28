#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a;
        if(a%2==0)
        {
            b=a/2;
            for(int i=0;i<b;i++)
                cout<<"1";
            cout<<endl;
        }
        else
        {
            cout<<"7";
            a=a-3;
            b=a/2;
            for(int i=0;i<b;i++)
                cout<<"1";
            cout<<endl;
        }
    }
    return 0;
}
