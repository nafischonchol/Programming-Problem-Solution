#include<iostream>
using namespace std;
int main()
{
    int pass, match= 2002;

    while(1){
        cin>>pass;

        if(pass != match)
            cout<<"Senha Invalida"<<endl;
        else if(pass == match){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
    }
    return 0;

}
