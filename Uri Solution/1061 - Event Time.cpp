#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string d[2],p[10];
    int h[2],m[3],s[3],w[2];
    int TD,TS,TH,TM,T;
    cin>>d[0]>>w[0];
    cin>>h[0]>>p[0]>>m[0]>>p[1]>>s[0];
    cin>>d[1]>>w[1];
    cin>>h[1]>>p[2]>>m[1]>>p[3]>>s[1];

    int t[3];
    t[0]=w[0]*86400+h[0]*3600+m[0]*60+s[0];
    t[1]=w[1]*86400+h[1]*3600+m[1]*60+s[1];
    T=t[1]-t[0];
    if(T>=60)
    {
        TD = T/86400;
        TH = (T%86400)/3600;
        TM = ((T%86400)%3600)/60;
        TS = ((T%86400)%3600)%60;
    }
    printf("%d dia(s)\n",TD);

    printf("%d hora(s)\n",TH);

    printf("%d minuto(s)\n",TM);

    printf("%d segundo(s)\n",TS);

    return 0;
}
