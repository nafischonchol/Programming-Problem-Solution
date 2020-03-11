#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        int led=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                led=led+2;
            else if(s[i]=='2' || s[i]=='3' || s[i]=='5')
                led=led+5;
            else if(s[i]=='4')
                led=led+4;
            else if(s[i]=='6' || s[i]=='9' || s[i]=='0')
                led=led+6;
            else if(s[i]=='7')
                led=led+3;
            else if(s[i]=='8')
                led=led+7;
        }
        cout<<led<<" leds"<<endl;
    }
    return 0;
}
