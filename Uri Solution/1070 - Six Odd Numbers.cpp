#include<stdio.h>
int main()
{
    int count=0,n,i,sum=0;
    scanf("%d",&n);
    for(i=n;count<=5;n++)
    {
        if(n%2!=0){

            printf("%d\n",n);
            count++;
        }
    }
    return 0;
}
