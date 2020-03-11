#include <bits/stdc++.h>
using namespace std;
int main() 
{
   
    string s,bg="";
    while(getline(cin,s))
    {
        string tmp="";
        if(s=="0")
        {
            cout<<endl<<"The biggest word: "<<bg<<endl;
            break;
        }
        for(int i=0;i<s.size();i++)
        {
           if(s[i]!=32)
           {
               tmp=tmp+s[i];
           }
           else
           {
               cout<<tmp.size()<<"-";
               if(tmp.size()>=bg.size())
                    bg=tmp;
               tmp="";
           }
        }
        if(!tmp.empty())
        {
            cout<<tmp.size();
            if(tmp.size()>=bg.size())
                bg=tmp;
        }
        cout<<endl;
    }
    return 0;
}
