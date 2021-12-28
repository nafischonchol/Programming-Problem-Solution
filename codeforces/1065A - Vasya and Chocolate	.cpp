#include<iostream>
 
using namespace std;
 
int main()
{
    int t,i,j;
    long long s,a,b,c,real,to;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
 
        real=s/c;
 
        to=((real/a)*b)+real;
 
 
        cout<<to<<endl;
    }
    return 0;
}
