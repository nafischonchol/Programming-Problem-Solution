#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    bool dance=false;
    while(getline(cin,s))
    {
        dance=false;
         for(int i=0;i<s.size();i++)
        {
            if(dance==false)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    s[i]=s[i]-32;
                    dance=true;
                }
                if(s[i]>='A' && s[i]<='Z')
                {
                    
                   dance=true;
                }
            }
            else if(dance==true)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    s[i]=s[i]+32;
                    dance=false;
                }
                if(s[i]>='a' && s[i]<='z')
                {
                    
                    dance=false;
                }
            }
            
        }
        cout<<s<<endl;
    } 
   
    return 0;
}
