//Problem Link: https://algo.codemarshal.org/contests/diu_takeoff_fall_19_mock/problems/D 
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[5],s=0,z=0;
  int x;
  cin>>a[1]>>a[2]>>a[3];
  cin>>x;
  if(x==3)
    cout<<a[1]+a[2]<<endl;
  else if(x==1)
  {
      s=a[2]+a[3];
      s=s-a[1];
        if(s<0)
        cout<<"0"<<endl;
        else
         cout<<s<<endl;
  }
  else
  {
      s=a[1]+a[3];
     z=s-a[2];

      s=a[1];

      if(s<z)
        cout<<z<<endl;
      else
         cout<<s<<endl;
  }

  return 0;
}
