#include<stdio.h>
int main()
{

    int a,b,i;
    long long int f,f1;
    while(scanf("%d",&a)!=EOF){
        scanf("%d",&b);
        f=0;f1=0;
        if(a==0 ||  a==1 )f++;
        else if(a>1){
                f=a;
            for(i=a-1;i>1;i--){
                f *= i;
            }
        }
        if(b==0 || b==1)f1++;
        else if(b>1){
            f1=b;
             for(i=b-1;i>1;i--){
                f1 *= i;
            }
        }
        printf("%lld\n",f+f1);
    }
    return 0;
}
