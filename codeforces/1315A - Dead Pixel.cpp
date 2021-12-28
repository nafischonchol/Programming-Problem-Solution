#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
      long long a,b,x,y;
      long long ans[5];
      cin>>a>>b>>x>>y;
      x=x+1;
      y=y+1;
      ans[0]=(y-1)*a;
      ans[1]=a*(b-y);
 
      ans[2]=b*(a-x);
      ans[3]=b*(x-1);
      sort(ans,ans+4);
      cout<<ans[3]<<endl;
 
  }
  return 0;
}
