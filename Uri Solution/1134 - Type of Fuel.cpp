#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a=0,g=0,d=0;
    cout<<"MUITO OBRIGADO"<<endl;
    while(cin>>x)
    {
        if(x==4)
            break;
        else if(x>4)
            continue;
        else if(x==1)
            a++;
        else if(x==2)
            g++;
        else if(x==3)
            d++;
        
    }
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;
    return 0;

}
