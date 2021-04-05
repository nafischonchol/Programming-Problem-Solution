#include <bits/stdc++.h>
using namespace std;

int getSubStringLength(string s1,string s2)
{
    s1="0"+s1;
    s2="0"+s2;
    int size1=s1.size();
    int size2=s2.size();
    int c[size1][size2];
    
    int max=0;
    
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(i==0 || j==0)
            {
                c[i][j]=0;
            }
            else if(s1[i]==s2[j])
            {
                c[i][j]=1+c[i-1][j-1];
                if(c[i][j]>max)
                {
                    max=c[i][j];  
                }      
            }
            else
            {
                c[i][j]=0;
            }
        }
    }
    return max;
}
int main() 
{
    string s1,s2;
    while(getline(cin,s1))
    {
         
        getline(cin,s2);
        int getResult=getSubStringLength(s1,s2);
        cout<<getResult<<endl; 
    }
    
    
    return 0;
}
